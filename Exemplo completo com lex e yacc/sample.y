%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "simbolTable.h"

	//contador de erros
	int error_count;
	//flag para continuar ou parar a execução de código
	int code_generate;
	//próxima posição na memória
	int next_position; 
	//Arquivo onde será armazenado o código 
	FILE *code_file;

	struct SNode {		
		int i_value;
		float f_value;
		int type;
	}SNode;

	main() {
		init();

		//Inicializando variáveis auxiliares
		error_count = 0;
		code_generate = TRUE;
		next_position = 0;

		//Abrindo o arquivo
		code_file = fopen("code.p", "w");
		fprintf( code_file, "INPP\n" );
		
		int res =  yyparse();	

		fclose( code_file );

		if( error_count > 0 )
			printf("Encontrado %d erros\n", error_count );

		//Remove o arquivo, caso a geração tenha parado
		if( !code_generate )
			remove( "code.p" );

		return res;
	}

	int yywrap()
	{
		return 1;
	} 

	/* Manipulação da tabela de símbolos */

	void addInTable( char *name, int type, int i_value, float f_value );


	/* Procedimentos para geração de código*/

	void buildAloc( Node *ident, int type, int i_value, float f_value );

	void buildReadMemory(  Node *ident  );

	void buidOperator( char operator );

	void end();

%}

%union YYSTYPE{
	int i_number;
	float r_number;
	char* name;
	int type;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
}

%token<i_number> I_NUMBER
%token<r_number> R_NUMBER
%token LET
%token IN 
%token ATRIB
%token VIRG
%token<name> IDENT
%token ADI
%token SUB
%token MUL
%token DIV
%token L_ERRO

//Definindo tipo dos nao terminais 
%type <snode> number
%type <snode> exp
%type <math_op> op

%%

s: comando_let { end(); };

comando_let: LET dec_lista IN exp {}
	| error dec_lista IN exp { yyerrok; printf("Erro sintatico: Era esperado o comando 'let', encontrado %d\n", yychar); }
	| LET error IN exp { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
	| LET dec_lista error exp { yyerrok; printf("Erro sintatico: Era esperado o comando 'in', encontrado %d\n", yychar); }
	| LET dec_lista IN error { yyerrok; printf("Erro sintatico: Era esperado uma expressoa apos IN, encontrado %d\n", yychar); }
	| error { printf("erro sintatico\n"); }

dec_lista: decl dec_lista2
	| error dec_lista2
	| decl error
	| error;

dec_lista2: VIRG decl dec_lista2
	| VIRG error dec_lista2 { yyerrok; }
	| VIRG decl error
	| ;


decl: IDENT ATRIB number { addInTable( $1, $3.type, $3.i_value, $3.f_value ); }	
	| IDENT error number {			
			printf("Erro sintático: era esperando := apos o identificador %s'\n", $1 );		
			addInTable( $1, $3.type, $3.i_value, $3.f_value );
			yyerrok;
		} 
	| IDENT ATRIB error {
			printf("Erro sintático: identificador %s sem tipo declarado\n", $1 ); 
			yyerrok;
			addInTable( $1, INDEFINED, 0, 0 );
		}  
	| error;

number: I_NUMBER { $$.type = INTEGER; $$.i_value = $1; }
	| R_NUMBER { $$.type = REAL; $$.f_value = $1; };

exp: 	exp op exp {
			//Verificando se alguma expressão possui tipo indefinido
			if( $1.type == INDEFINED || $3.type == INDEFINED ){
				$$.type = INDEFINED;
				printf("Erro semantico: Expressao com tipo nao declarado\n");
				code_generate = FALSE;
			}else{
				//Apenas expressões do mesmo tipo são aceitas
				if( $1.type != $3.type ){
					$$.type = INDEFINED;
					printf("Erro semantico: Operação sobre valores de tipos diferentes\n");
					code_generate = FALSE;
				}else{
					$$.type = $1.type;
					
					buidOperator( $2 );
				}
			}
		}
	| exp error exp {
			yyerrok;
			printf("Erro Sintatico: era esperado um operador matematico\n");
			
		}
	| IDENT { 
			//Verificando se o identificador foi declarado
			Node *ident = find( $1 );
			if( ident == NULL ){
				code_generate = FALSE;
				printf("Erro semantico: identificador %s nao declarado\n", $1 );
			
				$$.type = INDEFINED;
			}else{
				$$.type = ident->type;
				buildReadMemory( ident );
			}
		
		 };

op: 	ADI { $$ = '+'; } 
	| SUB { $$ = '-'; }  
	| error { $$ = ' ';};

%%

void addInTable( char *name, int type, int i_value, float f_value ){

	//Se ocorreu algum erro ao tentar inserir o identificador na tabela
	if( addIdent( name, type ) == FALSE ){
		printf("Erro semantico: identificador %s ja declarado\n", name );
		code_generate = FALSE; //PARA A GERACAO DE CODIGO 
	}else {
		Node *ident = find( name );
		ident->type = type;
		if( type == INTEGER ) 
			ident->i_value = i_value;
		else
			ident->f_value = f_value;

		ident->relative_position = next_position;

		buildAloc( ident , type, i_value, f_value );
	}
}


int yyerror( char *s ){
	code_generate = FALSE;
	error_count++;
	return 1;
}

/* 
 * Procedimentos para geração de código
 */

/* Procedimento que cria um código para carregar um valor de variavel*/
void buildReadMemory( Node *ident  ){
	
	if( code_generate == FALSE ) return;

	fprintf( code_file, "CRVL %d\n", ident->relative_position );
	
}

void buidOperator( char operator ){

	if( code_generate == FALSE ) return;

	if( operator == '+' ) fprintf( code_file, "SOMA\n");
	if( operator == '-' ) fprintf( code_file, "SUBT\n");
}

/* Procedimento que cria um código de alocação de memória, e também atribuição de valor*/
void buildAloc( Node *ident, int type, int i_value, float f_value ){
	
	if( code_generate == FALSE ) return;

	fprintf(code_file, "ALME 1\n");

	if( type == INTEGER )
		fprintf( code_file, "CRCT %d\n", i_value );
	else
		fprintf( code_file, "CRCT %f\n", f_value );

	//buscando endereco relativo 
	fprintf( code_file, "ARMZ %d\n", ident->relative_position );

	//Incrementa a próxima posição da memória
	next_position++;
}

/* Procedimento que cria o código para terminar o programa */
void end( ){

	if( code_generate == FALSE ) return;

	fprintf( code_file , "IMPR\nPARA\n");
	
}
