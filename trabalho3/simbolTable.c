#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct node {
	char *name;
	int i_value;
	float f_value;
	int type;
	int relative_position;
	struct node *next;
};
typedef struct node Node;

int size;
Node *head;

void init( ){
	size = 0;
	head = malloc( sizeof( Node ) );
	head->next = NULL;
}


Node* find( char* name ){
	
	Node *pointer = head->next;
	int index = 0;
	while( pointer != NULL ){

		if( strcmp( pointer->name , name ) ==0 )
			return pointer;

		index++;		
		pointer = pointer->next;
	}
	
	return NULL; 
}

int addIdent( char* name, int type ){
	
	//Verifica se o ident já existe
	if( find( name ) == NULL ){

		Node *new_node = malloc( sizeof( Node ) );
		new_node->type = type;
		new_node->name = strdup( name );	
		new_node->next = head->next;
		head->next = new_node;
		size++;

		return TRUE;
	}
	
	return FALSE;
	
}
