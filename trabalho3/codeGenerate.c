#include "codeGenerate.h"

#define NOPARAM -1
#define LBL_MAIN -2

/* Procedimentos para gerar codigo */
int next_position = 0; /* Proxima posicao de memoria livre */
int tamanho_codigo = 128;
int codline = 0;
int begin_procedure; /* Inicio do procedimento */
int qtd_aloc_procedure; /* Quantidade de memoria alocada no procedimento */
int marked=0;

CMD* codigo;

void addCommand(char* command, float param) {
    strcpy(codigo[codline].command, command );
    codigo[codline].param = param;
    codline++;
}

void init_codigo() {
    codigo = malloc(tamanho_codigo * sizeof(CMD));

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

void printCodigo() 
{
    int i=0;
    printf("Codigo\n");
    for(i=0; i<codline; i++) {
        printf("%2d %6s ", i, codigo[i].command);
        if(codigo[i].param != NOPARAM)
            printf("%1.0f\n", codigo[i].param); 
        else
            printf("\n");
    }
    printf("\n");
}
