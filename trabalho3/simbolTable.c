#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simbolTable.h"
#include "codeGenerate.h"

int size;
/* Tabela Global de Simbolos */
Node *GlobalSymbolTable;

/* Tabela de Simbolos do Procedimento */
Node *ProcedureSymbolTable;

/* Indica se esta dentro do procedimento */
int insideProcedure=0; 

/* Inicia a tabela de simbolos globais */
void init( ){
	size = 0;
	GlobalSymbolTable = malloc( sizeof( Node ) );
	GlobalSymbolTable->next = NULL;
}

/* Cria a tabela de simbolos de um procedimento */
void initProcedureSymbolTable() {
    ProcedureSymbolTable = malloc( sizeof( Node ) );
    ProcedureSymbolTable->next = NULL;

    insideProcedure = 1;
}

/* Desaloca a memoria da tabela de simbolos do procedimento */
void deleteProcedureSymbolTable() {
    Node *paux = ProcedureSymbolTable;

    while (paux != NULL) {
        Node *prem = paux;
        paux = paux->next;
        free(prem);
    }

    insideProcedure = 0;
}

Node* findProcedureSymbol(char* name) {
    Node* pointer = ProcedureSymbolTable->next;         
    while( pointer != NULL ){
                                                 
    	if( strcmp( pointer->name , name ) == 0 )
    		return pointer;
                                                 
    	pointer = pointer->next;
    }
    return NULL;
}

Node* findGlobalSymbol(char* name) {
    Node* pointer = GlobalSymbolTable->next;
    while( pointer != NULL ){
                                                 
        if( strcmp( pointer->name , name ) ==0 )
            return pointer;
                                                 
        pointer = pointer->next;
    }
}

/* 
 * Procura um simbolo, primeiro no procedimento (se estiver dentro do procedimento) 
 * e/ou na tabela de simbolos globais 
 * Local indica que eh para procurar somente na tabela de simbolos do procedimento (local)
 * */
Node* findSymbol(char* name){
    Node* pointer = NULL;
    if(insideProcedure == 1)
        pointer = findProcedureSymbol(name);

    if(pointer == NULL) {
        return findGlobalSymbol(name);
    } else {
        return pointer;
    }

    /* Retorna NULL se nao achou nenhum simbolo local ou global */
	return NULL; 
}

Node* addSymbol( char* name, VarValue value, Categoria cat ){
	
	//Verifica se o ident já existe
    if( ( (insideProcedure == 1) &&
        ( findProcedureSymbol(name) == NULL ))
        ||( (insideProcedure == 0) &&
           (findGlobalSymbol(name) == NULL)))       
        {

		Node *new_node = malloc( sizeof( Node ) );
		new_node->value = value;
		new_node->name = strdup( name );	
        new_node->categoria = cat;

        /* Verifica se esta dentro de um procedimento */
        if(insideProcedure == 1) {
            new_node->next = ProcedureSymbolTable->next;
            ProcedureSymbolTable->next = new_node;
        } else {
		    new_node->next = GlobalSymbolTable->next;
		    GlobalSymbolTable->next = new_node;
		    size++;
        }

		return new_node;
	}
	
	return NULL;	
}

Node* addProgram(char* name) {
    VarValue value;
    value.i_value = 0;
    value.f_value = 0;
    value.type = INDEFINED;
    return addSymbol(name, value, PROGRAM); 
}

Node* addConstant(char* name, VarValue value) {
    Node* new_node = addSymbol(name, value, CONSTANT);
    buildAloc(new_node);
    return new_node;
}

int addVariables( ListaLigadaVar *variables, VarValue value) {
    int errorAddIdent = FALSE;	/* se alguma variavel nao puder ser adicionada a flag e setada como true */
    
    /* Percorre a lista de variaveis e adiciona na tabela de simbolos */
    NoVar *paux = variables->inicio;                                                    
    value.i_value = 0;
    value.f_value = 0;
    while (paux != NULL) {
        Node* new_node = addSymbol( paux->variable.name, value, VARIABLE ); 
        
        if (new_node == NULL) {
        	printf("Erro Semantico: identificador %s ja declarado\n", paux->variable.name );
			errorAddIdent = TRUE;
        } else {
            buildAloc(new_node);
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
    Node* paux = findSymbol(name);
    if( paux == NULL ){

    	Node *new_node = malloc( sizeof( Node ) );
    	new_node->name = strdup( name );	
        new_node->categoria = PROCEDURE;
        new_node->value.type = INDEFINED;
        /* Cria uma lista para armazenar os tipos dos Parametros */
        ListaLigadaVarType paramType;
        lli_criar(&paramType);

        /* Percorre a lista de variaveis e adiciona na tabela de simbolos */
        NoVar *paux = paramList->inicio;                                                    
        while (paux != NULL) {
            lli_inserir(&paramType, &paux->variable.value.type);

            paux = paux->proximo;
        }

        new_node->paramType = paramType;
        new_node->next = GlobalSymbolTable->next;
    	GlobalSymbolTable->next = new_node;
    	size++;
       
        /* Cria a tabela de procedimento e os proximos simbolos sao adicionados nela */
        initProcedureSymbolTable();

        /* Para gerar o codigo proprio para o procedimento */
        buildProcedure(new_node);

    	return TRUE;
    } else {
        printf("Erro Semantico: procedimento %s ja declarado\n", paux->name );
    }
    
    return FALSE;	 
}

/* Sai do procedimento e deleta a tabela de simbolos */
int endProcedure() {
    if(insideProcedure == 1) {
        printSimbolTable(0);
        destroyProcedure();

        deleteProcedureSymbolTable();
    }
}

/* Verifica uma chamada ao read ou write */
int checkCallReadWrite(char* comando, ListaLigadaVar *paramList)
{
	NoVar *paux = NULL;
	Node *pointer = NULL;
	int type;
    int error=0;

	/* Verifica:
     * 4. Gera o codigo do READ ou do WRITE
     * */	

	paux = paramList->inicio;                                                   
	pointer = findSymbol( paux->variable.name );
	if(pointer == NULL){
		printf("Erro Semantico: identificador %s nao declarado\n", paux->variable.name);
        error = 1;
	}else{
		/* salva o tipo da primeira variavel na lista */
		type = pointer->value.type;
	}
	
	//printf("o nome e %s e o valor de tipo e %d\n", paux->variable.name, type);

	while (paux != NULL) {
		pointer = findSymbol( paux->variable.name );
		/* 1. Verifica se as variaveis foram declaradas */
		if( pointer == NULL ){
        	printf("Erro Semantico: identificador %s nao declarado\n", paux->variable.name );	
            error = 1;
		} else {
		    if(pointer->categoria != VARIABLE && pointer->categoria != CONSTANT){
                printf("Erro Semantico: identificador %s possui uma categoria que nao eh aceita como argumento\n", pointer->name);
                error = 1;
            }
			 /* 2. Se for read, verifica se a variavel nao eh uma constante */
			if( strcmp(comando,"READ") == 0){
		
				if( pointer->categoria == CONSTANT ){
					printf("Erro Semantico: identificador %s eh uma constante\n", pointer->name);
                    error = 1;
				}		
			}
			
     		/* 3. se todos os parametros sao do mesmo tipo*/
			if( type != pointer->value.type ){
				printf("Erro Semantico: parametros com tipos diferentes\n");
                error = 1;
			}
		
		}
		paux = paux->proximo;
	}
    if(error == 0){
        buildReadWrite(comando, paramList);
        return TRUE;
    }
    return FALSE;
    
}

int checkCallProcedure(char* name, ListaLigadaVar* paramList)
{
    NoVar *paux = NULL;
	Node *pointer = NULL;
    Node *proc = NULL;
    NoVarType *paramType = NULL; //tipo do parametro atual
	int type;
    int error=0;
    paux = paramList->inicio;

    proc = findSymbol(name);
    if(proc == NULL){
        printf("Erro Semantico: procedimento %s nao declarado\n", name);
        return FALSE;
    }
    if ( proc->categoria != PROCEDURE) {
        printf("Erro Semantico: identificador %s nao eh um procedimento\n", name);
        return FALSE;
    }

    /* Procedimento sem argumento */
    if( (paux == NULL) && (paramType == NULL) ) {
        buildCallProcedure(proc, paramList);
        return TRUE;
    } else {

        pointer = findSymbol( paux->variable.name );
        proc = findSymbol(name);
        if(proc == NULL){
            printf("Erro Semantico: procedimento %s nao declarado\n", name);
            return FALSE;
        }
        paramType = proc->paramType.inicio;
        if(pointer == NULL){
            printf("Erro Semantico: variavel %s nao declarada\n", paux->variable.name);
            error = 1;
        } else {
            type = pointer->value.type;
        }
        //printf("o nome e %s e o valor de tipo e %d\n", paux->variable.name, type);
        if( (paux != NULL) &&  (paramType == NULL) ){                                                                       
            printf("Erro Semantico: wrong number numero de argumentos excede o numero de parametros esperados\n");
            error = 1;
            return FALSE;
        }                                                                                            //

        while (paux != NULL) {
            /* Verifica se o numero de argumentos passado é maior que o esperado */
            if (paramType == NULL){
                printf("Erro Semantico: numero de argumentos excede o numero de parametros esperados\n");
                error = 1;
                return FALSE;
            }
            pointer = findSymbol( paux->variable.name );
            /* Verifica se as variaveis foram declaradas */
            if( pointer == NULL ){
                printf("Erro Semantico: variavel %s nao declarada\n", paux->variable.name );
                error = 1;
            } else {
                /* Verifica se a categoria eh aceita como argumento de procedimentos */
                if( pointer->categoria != CONSTANT && pointer->categoria != VARIABLE){
                    printf("Erro Semantico: identificador %s possui uma categoria nao aceita como argumento\n", pointer->name);
                    error = 1;
                 }			
                /* Verifica se todos os parametros sao do mesmo tipo*/
                if( paramType->type != pointer->value.type ){
                    printf("Erro Semantico: parametros com tipos diferentes\n");
                    error = 1;
                }
            
            }
            paux = paux->proximo;
            paramType = paramType->proximo;
        }
        /* Verifica se o numero de argumentos passado é menor que o esperado */
        if(paramType != NULL ){
            printf("Erro Semantico: numero de argumentos nao atinge o numero de parametros esperados\n");
            error = 1;
        }
        if(error == 0){
            buildCallProcedure(proc, paramList);
            return TRUE;
        }
    }
    return FALSE;
}

/* Print Routines for Debug Purposes */
void printVarType(VarType type) {
    switch(type) {
        case INDEFINED:
            printf("undefined");
            break;
        case INTEGER:
            printf("integer\t");
            break;
        case REAL:
            printf("real\t");
            break;
        default:
            printf("undefined");
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

void printParamType(ListaLigadaVarType *paramType) {
    NoVarType *paux = paramType->inicio;
                                  
    while (paux != NULL) {
        printVarType(paux->type);
        printf("\t");
        paux = paux->proximo;
    }
}

void printSimbolTable(int Global){
	Node *pointer;
    if( Global == 1) {
        pointer = GlobalSymbolTable->next;
        printf("Global Symbol Table\n");
    } else {
        pointer = ProcedureSymbolTable->next;
        printf("Procedure Symbol Table\n");
    }

    printf("name\ti_value\t\tf_value\t\ttype\t\tendereco relativo\t\tcategoria\tparamType\n");
	while( pointer != NULL ){	
        printf("%s\t%8d\t%.2f\t\t",pointer->name, pointer->value.i_value, pointer->value.f_value);

        printVarType(pointer->value.type);

        printf("\t\t%d\t\t\t", pointer->relative_position );
        
        printCategoria(pointer->categoria);

        printf("\t");
       
        printParamType(&pointer->paramType);

        printf("\n");
		
		pointer = pointer->next;
	}	
}	

