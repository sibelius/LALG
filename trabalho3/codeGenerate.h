#ifndef _CODEGENERATE_
#define _CODEGENERATE_

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "simbolTable.h"

struct cmd {
    char command[10];
    float param;
};
typedef struct cmd CMD;

void init_codigo();

void addCommand(char* command, float param); 

/* Procedimentos para gerar codigo */
void buildAloc(Node* node);

void buildProcedure(Node* node);

void destroyProcedure();

void buildReadWrite(char* command, ListaLigadaVar *paramList);

void buildCallProcedure(Node* proc, ListaLigadaVar *paramList);

void buildCondition(Condicao cond);

void buildStartIf(Condicao cond);

/* Preenche os valores os enderecos de desvio */
void buildEndIf();

void buildElse();

void buildStartWhile(Condicao cond);

void buildEndWhile();

void buildAssign(char* name ,char* exp);

void printCodigo(FILE* arquivo);

#endif
