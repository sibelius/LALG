#ifndef _SIMBOLTABLE_
#define _SIMBOLTABLE_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ListaLigada/ListaLigadaVarType.h"
#include "ListaLigada/ListaLigadaVar.h"
#include "types.h"

struct node {
	char *name; /* Cadeia */
    VarValue value;
	int relative_position; /* Endereco na memoria */
    Categoria categoria; /* Categoria */
    ListaLigadaVarType paramType; /* Lista dos tipos do procedure */
	struct node *next;                                          
};
typedef struct node Node;

void init();

Node* findSymbol( char* name );

/* Adiciona nome do programa, variaveis, constantes */
Node* addSymbol( char* name, VarValue value, Categoria cat );

Node* addConstant(char* name, VarValue value);
int addVariables( ListaLigadaVar *variables, VarValue value);
int addProcedure(char* name, ListaLigadaVar *paramList);
int endProcedure();

/* Verifica uma chamada ao read ou write */
int checkCallReadWrite(char* name, ListaLigadaVar *paramList);
int checkCallProcedure(char* name, ListaLigadaVar *paramList);

void printVarType(VarType type);
void printCategoria(Categoria categoria);
void printParamType(ListaLigadaVarType *paramType);

/* Global indica se eh para imprimir a tabela de simbolos global */
void printSimbolTable(int Global);

#endif
