#include "codeGenerate.h"

/* Procedimentos para gerar codigo */
int next_position = 0; /* Proxima posicao de memoria livre */
int tamanho_codigo = 128;
int codline = 0;
int begin_procedure; /* Inicio do procedimento */
int qtd_aloc_procedure; /* Quantidade de memoria alocada no procedimento */

CMD* codigo;

void addCommand(char* command, float param) {
    strcpy(codigo[codline].command, command );
    codigo[codline].param = param;
    codline++;
}

void init_codigo() {
    codigo = malloc(tamanho_codigo * sizeof(CMD));

    addCommand("INPP", -1);
}

void end_codigo() {
    addCommand("PARA", -1);
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

    addCommand("DSVI", -2);

    NoVarType *paux = node->paramType.inicio;
   
    /* COPVL para cada um dos parametros */
    while (paux != NULL) {
        qtd_aloc_procedure++;
                                              
        addCommand("COPVL", -1);
        
        paux = paux->proximo;
    }
}

void destroyProcedure() {
    addCommand("DESM", qtd_aloc_procedure);
    addCommand("RTPR", -1);
    
    next_position = begin_procedure;
}

void buildReadWrite(char* command, ListaLigadaVar *paramList) {
    NoVar *paux;
    Node *pointer;
    paux = paramList->inicio;          

    while (paux != NULL) {
        pointer = findSymbol(paux->variable.name);
   
        if(strcmp(command, "READ") == 0) {
            addCommand("LEIT", -1);
            addCommand("ARMZ", pointer->relative_position);
        } else {
            addCommand("CRVL", pointer->relative_position);
            addCommand("IMPR", -1);
        }

        paux = paux->proximo;
    }
}

void buildCallProcedure(char* name, ListaLigadaVar *paramList) {
    NoVar *paux;
    Node *pointer;
    paux = paramList->inicio;          
    int linha_pusher = codline;
    addCommand("PUSHER", -2);

    while (paux != NULL) {
        pointer = findSymbol(paux->variable.name);
        addCommand("PARAM", pointer->relative_position);
       
        paux = paux->proximo;
    }
    codigo[linha_pusher].param = codline;
}

void printCodigo() 
{
    int i=0;
    printf("Codigo\n");
    for(i=0; i<codline; i++) {
        printf("%s ", codigo[i].command);
        if(codigo[i].param != -1)
            printf("%1.0f\n", codigo[i].param); 
        else
            printf("\n");
    }
    printf("\n");
}
