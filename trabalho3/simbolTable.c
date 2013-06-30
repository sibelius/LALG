#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simbolTable.h"

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

int addSymbol( char* name, VarValue value, Categoria cat ){
	
	//Verifica se o ident já existe
	if( find( name ) == NULL ){

		Node *new_node = malloc( sizeof( Node ) );
		new_node->value = value;
		new_node->name = strdup( name );	
        	new_node->categoria = cat;
		new_node->next = head->next;
		head->next = new_node;
		size++;

		return TRUE;
	}
	
	return FALSE;	
}

int addProgram(char* name) {
    VarValue value;
    return addSymbol(name, value, PROGRAM); 
}

int addConstant(char* name, VarValue value) {
    return addSymbol(name, value, CONSTANT);
}

int addVariables( ListaLigadaVar *variables, VarValue value) {
    int errorAddIdent = FALSE;	/* se alguma variavel nao puder ser adicionada a flag e setada como true */
    
    /* Percorre a lista de variaveis e adiciona na tabela de simbolos */
    NoVar *paux = variables->inicio;                                                    
    while (paux != NULL) {
        if ( addSymbol( paux->variable.name, value, VARIABLE ) == FALSE ) {
        	printf("Erro semantico: identificador %s ja declarado\n", paux->variable.name );
			errorAddIdent = TRUE;
        }

        /*rintf("%s - %d\n", paux->variable.name, paux->variable.value.type);*/
        paux = paux->proximo;
    }
    
    //se encontrou algum erro retorna false
 	return !errorAddIdent;   
}

int addProcedure(char* name, ListaLigadaVar *paramList)
{
    //Verifica se o ident já existe
    if( find( name ) == NULL ){

        /* TODO - Temos que ter uma tabela de simbolo para cada procedimento */
    	Node *new_node = malloc( sizeof( Node ) );
    	new_node->name = strdup( name );	
        new_node->categoria = PROCEDURE;

        /* Cria uma lista para armazenar os tipos dos Parametros */
        ListaLigadaInt paramType;
        lli_criar(&paramType);

        /* Percorre a lista de variaveis e adiciona na tabela de simbolos */
        NoVar *paux = paramList->inicio;                                                    
        while (paux != NULL) {
            lli_inserir(&paramType, &paux->variable.value.type);

            paux = paux->proximo;
        }

        new_node->paramType = paramType;
        new_node->next = head->next;
    	head->next = new_node;
    	size++;
                                                   
    	return TRUE;
    }
    
    return FALSE;	 
}

/* Verifica uma chamada ao read ou write */
int checkCallReadWrite(char* comando, ListaLigadaVar *paramList)
{
	NoVar *paux = NULL;
	Node *pointer = NULL;
	int type;

	/* Verifica:
     * 4. Gera o codigo do READ ou do WRITE
     * */	

	paux = paramList->inicio;                                                   
	pointer = find( paux->variable.name );
	if(pointer == NULL){
		printf("Erro semantico: identificador %s nao declarado\n", paux->variable.name);
		//return;	
	}else{
		/* salva o tipo da primeira variavel na lista */
		type = pointer->value.type;
	}
	
	//printf("o nome e %s e o valor de tipo e %d\n", paux->variable.name, type);

	while (paux != NULL) {
		pointer = find( paux->variable.name );	
		/* 1. Verifica se as variaveis foram declaradas */
		if( pointer == NULL ){
        	printf("Erro semantico: identificador %s nao declarado\n", paux->variable.name );	
		} else {
		
			 /* 2. Se for read, verifica se a variavel nao eh uma constante */
			if( strcmp(comando,"READ") == 0){
		
				if( pointer->categoria == CONSTANT ){
					printf("Erro semantico: identificador %s e uma constante\n", pointer->name);
				}		
			}
			
     		/* 3. se todos os parametros sao do mesmo tipo*/
			if( type != pointer->value.type ){
				printf("Erro semantico: parametros com tipos diferentes\n");
			}
		
		}
		paux = paux->proximo;
	}
}

/* Print Routines for Debug Purposes */
void printVarType(VarType type) {
    switch(type) {
        case INDEFINED:
            printf("indefined");
            break;
        case INTEGER:
            printf("integer");
            break;
        case REAL:
            printf("real");
            break;
    }
}

void printCategoria(Categoria categoria) {
    switch(categoria) {
        case PROGRAM:
            printf("program");
            break;
        case VARIABLE:
            printf("variable");
            break;
        case PROCEDURE:
            printf("procedure");
            break;
        case CONSTANT:
            printf("constant");
            break;
    }
}

void printParamType(ListaLigadaInt *paramType) {
    NoVarType *paux = paramType->inicio;
                                  
    while (paux != NULL) {
        printVarType(paux->type);
        printf("\t");
        paux = paux->proximo;
    }
}

void printSimbolTable(){
	Node *pointer = head->next;
    printf("name\ti_value\t\tf_value\t\ttype\trelative_position\tcategoria\tparamType\n");
	while( pointer != NULL ){	
        printf("%s\t%8d\t%.2f\t\t",pointer->name, pointer->value.i_value, pointer->value.f_value);

        printVarType(pointer->value.type);

        printf("\t%d\t\t\t", pointer->relative_position );
        
        printCategoria(pointer->categoria);

        printf("\t");
       
        printParamType(&pointer->paramType);

        printf("\n");
		
		pointer = pointer->next;
	}	
}	
