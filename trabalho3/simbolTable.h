#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ListaLigada/ListaLigadaInt.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif


//Tipos
#define INDEFINED 0
#define INTEGER 1
#define REAL 2

enum cat {
        PROGRAM = 1,
        VARIABLE,
        PARAMETER,
        PROCEDURE,
        CONSTANT
    };
typedef enum cat Categoria;

struct node {
	char *name; /* Cadeia */
	int i_value; /* Valor inteiro */
	float f_value; /* Valor real */
	int type; /* Tipo */
	int relative_position; /* Endereco na memoria */
    Categoria categoria; /* Categoria */
    ListaLigadaInt paramType; /* Lista dos tipos do procedure */
	struct node *next;
};
typedef struct node Node;

void init( );

Node* find( char* name );

int addIdent( char* name, int type );

int addVariable( char* name, int type);

int addVariables( ListaLigadaVar variables, int type);
