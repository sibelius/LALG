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
int buildAloc(Node* node);

int buildProcedure(Node* node);

int destroyProcedure();

int buildReadWrite(char* command, ListaLigadaVar *paramList);

int buildCallProcedure(Node* proc, ListaLigadaVar *paramList);

int buildCondition(Condicao cond);

int buildStartIf(Condicao cond);

/* Preenche os valores os enderecos de desvio */
int buildEndIf();

int buildElse();

int buildStartWhile(Condicao cond);

int buildEndWhile();

int buildAssign(char* name ,char* exp);

void printCodigo(FILE* arquivo);

#endif
