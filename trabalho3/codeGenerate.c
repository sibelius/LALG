#include "codeGenerate.h"
#include "InfixToPostFix/expressionConvert.h" 

#define NOPARAM -1
#define LBL_MAIN -2
#define LBL_IF -3
#define LBL_ELSE -4
#define LBL_WHILE -5
#define LBL_WHILECODE -6

/* Procedimentos para gerar codigo */
int next_position = 0; /* Proxima posicao de memoria livre */
int tamanho_codigo = 128;
int codline = 0;
int begin_procedure; /* Inicio do procedimento */
int qtd_aloc_procedure; /* Quantidade de memoria alocada no procedimento */
int marked=0;
Stack pilhaWhile;

CMD* codigo;

void addCommand(char* command, float param) {
    strcpy(codigo[codline].command, command );
    codigo[codline].param = param;
    codline++;
}

void init_codigo() {
    codigo = malloc(tamanho_codigo * sizeof(CMD));
    emptystack(&pilhaWhile);

    addCommand("INPP", NOPARAM);
}

void end_codigo() {
    int i;
    int mainProgramBegin;
    addCommand("PARA", NOPARAM);

    /* Completa o DSVI dos procedimentos */
    for(i=codline-1; i>=0; i--) {
        if(strcmp(codigo[i].command, "RTPR") == 0) {
            mainProgramBegin = i+1;
            break;
        }
    }

    for(i=0; i<codline; i++)
        if(codigo[i].param == LBL_MAIN)
            codigo[i].param = mainProgramBegin;
}

/* Realoca para o dobro do tamanho atual */
void realocar_codigo() {
    if(tamanho_codigo <= codline) {
        tamanho_codigo = tamanho_codigo * 2;
        codigo = realloc(codigo, tamanho_codigo * sizeof(CMD));
    }
}

void buildAloc(Node* node) 
{
    node->relative_position = next_position++;

    addCommand("ALME", 1);

    qtd_aloc_procedure++;
}

void buildProcedure(Node* node) {
    begin_procedure = next_position;
    qtd_aloc_procedure = 0;
    
    node->relative_position = codline+1;

    addCommand("DSVI", LBL_MAIN);

    NoVarType *paux = node->paramType.inicio;
   
    /* COPVL para cada um dos parametros */
    while (paux != NULL) {
        qtd_aloc_procedure++;
                                              
        addCommand("COPVL", NOPARAM);
        
        paux = paux->proximo;
    }
}

void destroyProcedure() {
    addCommand("DESM", qtd_aloc_procedure);
    addCommand("RTPR", NOPARAM);
    
    next_position = begin_procedure;
}

void buildReadWrite(char* command, ListaLigadaVar *paramList) {
    NoVar *paux;
    Node *pointer;
    paux = paramList->inicio;          

    while (paux != NULL) {
        pointer = findSymbol(paux->variable.name);
   
        if(strcmp(command, "READ") == 0) {
            addCommand("LEIT", NOPARAM);
            addCommand("ARMZ", pointer->relative_position);
        } else {
            addCommand("CRVL", pointer->relative_position);
            addCommand("IMPR", NOPARAM);
        }

        paux = paux->proximo;
    }
}

void buildCallProcedure(Node* proc, ListaLigadaVar *paramList) {
    NoVar *paux;
    Node* pointer;
    paux = paramList->inicio;          
    int linha_pusher = codline;
    addCommand("PUSHER", -2);

    while (paux != NULL) {
        pointer = findSymbol(paux->variable.name);
        addCommand("PARAM", pointer->relative_position);
       
        paux = paux->proximo;
    }

    addCommand("CHPR", proc->relative_position);
    codigo[linha_pusher].param = codline;
}

Rel isrelacao(char* op)
{
    if(strcmp(op,"=")==0)
        return EQUAL; 
    if(strcmp(op,"<>")==0)
        return DIFF;
    if(strcmp(op,">=")==0)
        return GREATER_EQ;
    if(strcmp(op,"<=")==0)
        return LESSER_EQ;
    if(strcmp(op,">")==0)
        return GREATER;
    if(strcmp(op,"<")==0)
        return LESSER;
}

void buildCondition(Condicao cond)
{
    char* p;
    Rel relacao;
    Node* pointer;

    p = strtok(cond.c_value, " ");
    while(p != NULL) {
        if(isdigit(*p)) {
            addCommand("CRCT", atof(p));
        } else if(isalpha(*p)) {
            pointer = findSymbol(p);
            addCommand("CRVL", pointer->relative_position);
        } else if(isoperator(*p)) {
            switch(*p) {
                case '+':
                    addCommand("SOMA", NOPARAM);
                    break;
                case '-':
                    addCommand("SUBT", NOPARAM);
                    break;
                case '*':
                    addCommand("MULT", NOPARAM);
                    break;
                case '/':
                    addCommand("DIVI", NOPARAM);
                    break;
            }
        } else {
            relacao = isrelacao(p);
        }
        p = strtok(NULL, " ");
    }

    switch(relacao) {
        case EQUAL:
            addCommand("CPIG", NOPARAM);
            break;
        case DIFF:
            addCommand("CDES", NOPARAM);
            break;
        case GREATER_EQ:
            addCommand("CMAI", NOPARAM);
            break;
        case LESSER_EQ:
            addCommand("CPMI", NOPARAM);
            break;
        case GREATER:
            addCommand("CPMA", NOPARAM);
            break;
        case LESSER:
            addCommand("CPME", NOPARAM);
            break;
    }
}

void buildStartIf(Condicao cond)
{
    printf("cond: %s\n", cond.c_value);
    /* Gera o codigo da condicao */
    buildCondition(cond);
    addCommand("DSVF", LBL_IF);
}

void buildEndIf()
{
    int i;
    int initElse=-1;

    /* Procura o ultimo DSVI que representa o ELSE */
    for(i=codline-1; i>=0; i--) {
        if(codigo[i].param == LBL_ELSE) {
            codigo[i].param = codline;
            initElse = i+1;
            break;
        }
    }
    
    /* Procuro o ultimo DSVF que representa o IF */
    for(i=codline-1; i>=0; i--) {
        if(codigo[i].param == LBL_IF) {
            if(initElse != -1)
                codigo[i].param = initElse;
            else
                codigo[i].param = codline;
        }
    }
}

void buildElse() {
    addCommand("DSVI", LBL_ELSE);
}

void buildStartWhile(Condicao cond) {
    push(&pilhaWhile, codline);
    
    buildCondition(cond);
    addCommand("DSVF", LBL_WHILE);
}

void buildEndWhile() {
    int i;
    int initCondition = pop(&pilhaWhile);
    addCommand("DSVI", initCondition);

    for(i=codline-1; i>=0; i--) {
        if(codigo[i].param == LBL_WHILE) {
            codigo[i].param = codline;
            break;
        }
    }
}

void buildAssign(char* name, char* exp)
{
    char* p;
    Node* pointer;
    p = strtok(exp, " ");
    while(p != NULL) {
        if(isdigit(*p)) {
            addCommand("CRCT", atof(p));
        } else if(isalpha(*p)) {
            pointer = findSymbol(p);
            addCommand("CRVL", pointer->relative_position);
        } else if(isoperator(*p)) {
            switch(*p) {
                case '+':
                    addCommand("SOMA", NOPARAM);
                    break;
                case '-':
                    addCommand("SUBT", NOPARAM);
                    break;
                case '*':
                    addCommand("MULT", NOPARAM);
                    break;
                case '/':
                    addCommand("DIVI", NOPARAM);
                    break;
            }
        } 
        p = strtok(NULL, " ");
    }
    pointer = findSymbol(name);
    addCommand("ARMZ", pointer->relative_position);

}

void printCodigo(FILE* code_file) 
{
    int i=0;
    for(i=0; i<codline; i++) {
        fprintf(code_file, "%s ", codigo[i].command);
        if(codigo[i].param != NOPARAM)
            fprintf(code_file, "%1.0f\n", codigo[i].param); 
        else
            fprintf(code_file, "\n");
    }
    fprintf(code_file, "\n");
}
