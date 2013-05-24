#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


struct node {
	char *name;
	int i_value;
	float f_value;
	int type;
	int relative_position;
	struct node *next;
};
typedef struct node Node;

void init( );

Node* find( char* name );

int addIdent( char* name, int type );
