%{

extern "C"
{
	int yyparse(void);
	int yylex(void);  
	int yywrap()
	{
		return 1;
	}
}


%}

%union YYSTYPE {
	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
}

%token T_PROGRAM 
%token T_BEGIN
%token T_END
%token T_VAR
%token T_CONST
%token T_REAL
%token T_INTEGER
%token T_PROCEDURE
%token T_READ
%token T_WRITE
%token T_WHILE
%token T_IF
%token T_THEN
%token T_ELSE
%token T_FOR
%token T_TO
%token T_DO
%token T_EQUAL
%token T_DIFF
%token T_GREATER_EQ
%token T_LESSER_EQ
%token T_GREATER
%token T_LESSER
%token T_PLUS
%token T_MINUS
%token T_TIMES
%token T_DIVISION
%token T_ASSIGN
%token T_SEMICOLON
%token T_COLON
%token T_L_PAREN
%token T_R_PAREN
%token T_COMMA
%token T_DOT
%token T_ID
%token ERR_MF_INTEGER
%token ERR_MF_REAL
%token ERR_MF_ID
%token ERR_LONG_ID
%token ERR_COMMENT
%token ERR_UNKNOWN       

%token<i_number> T_INUMBER
%token<r_number> T_RNUMBER

%%

programa: T_PROGRAM T_ID T_SEMICOLON corpo T_DOT { end(); };
	| error T_ID T_SEMICOLON corpo T_DOT { yyerrok; printf("Erro sintatico: Era esperado o comando 'program', encontrado %d\n", yychar); }
	| T_PROGRAM error T_SEMICOLON corpo T_DOT { yyerrok; printf("Erro sintatico: Era esperado o comando 'ident', encontrado %d\n", yychar); }
	| T_PROGRAM T_ID error corpo T_DOT { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
	| T_PROGRAM T_ID T_SEMICOLON error T_DOT { yyerrok; printf("Erro sintatico: Erro na declaracao do corpo do programa, encontrado %d\n", yychar); }
	| T_PROGRAM T_ID T_SEMICOLON corpo error { yyerrok; printf("Erro sintatico: Era esperado o comando '.', encontrado %d\n", yychar); }
	| error { printf("erro sintatico\n"); }

corpo: dc T_BEGIN comandos T_END {}
	| error T_BEGIN comandos T_END { yyerrok; printf("Erro sintatico: Erro de declaracao, encontrado %d\n", yychar); }
	| dc error comandos T_END { yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar); }
	| dc T_BEGIN error T_END { yyerrok; printf("Erro sintatico: Erro na declaracao de comandos, encontrado %d\n", yychar); }
	| dc T_BEGIN comandos error { yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar); }
	| error { printf("erro sintatico\n"); }

dc: dc_c dc_v dc_p {}
	| error dc_v dc_p { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
	| dc_c error dc_p { yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
	| dc_c dc_v error { yyerrok; printf("Erro sintatico: Erro na declaracao de parametros, encontrado %d\n", yychar); }	
	/*| error { printf("erro sintatico\n"); */

dc_c : T_CONST T_ID numero T_SEMICOLON dc_c {}
	| error T_ID numero T_SEMICOLON dc_c { yyerrok; printf("Erro sintatico: Era esperado o comando 'const', encontrado %d\n", yychar); }
	| T_CONST error numero T_SEMICOLON dc_c { yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar); }
	| T_CONST T_ID error T_SEMICOLON dc_c { yyerrok; printf("Erro sintatico: Erro na declaracao de numero, encontrado %d\n", yychar); }
	| T_CONST T_ID numero error dc_c { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
	| T_CONST T_ID numero T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
	| error { printf("erro sintatico\n"); }
	| /* lambda */

dc_v : T_VAR variaveis T_COLON tipo_var T_SEMICOLON dc_v {} 
	| error variaveis T_COLON tipo_var T_SEMICOLON dc_v { yyerrok; printf("Erro sintatico: Era esperado o comando 'var', encontrado %d\n", yychar); }
	| T_VAR error T_COLON tipo_var T_SEMICOLON dc_v { yyerrok; printf("Erro sintatico: Erro na declaracao de nome das variaveis, encontrado %d\n", yychar); }
	| T_VAR variaveis error tipo_var T_SEMICOLON dc_v { yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar); }
	| T_VAR variaveis T_COLON error T_SEMICOLON dc_v { yyerrok; printf("Erro sintatico: Erro na declaracao de tipo_var, encontrado %d\n", yychar); }
	| T_VAR variaveis T_COLON tipo_var error dc_v { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
	| T_VAR variaveis T_COLON tipo_var T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
	| error { printf("erro sintatico\n"); }
	| /* lambda */

tipo_var: T_REAL {}
	| T_INTEGER {}
	| error { printf("erro sintatico\n"); }

variaveis: T_ID mais_var {}

mais_var: T_COMMA variaveis {}
	| error variaveis { yyerrok; printf("Erro sintatico: Era esperado o comando ',', encontrado %d\n", yychar}
	| T_COMMA error { yyerrok; printf("Erro sintatico: Era na declaracao de variaveis, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

dc_p: T_PROCEDURE T_ID parametros T_SEMICOLON corpo_p dc_p {}
	| error T_ID parametros T_SEMICOLON corpo_p dc_p { yyerrok; printf("Erro sintatico: Era esperado o comando 'procedure', encontrado %d\n", yychar}
	| T_PROCEDURE error parametros T_SEMICOLON corpo_p dc_p { yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar}
	| T_PROCEDURE T_ID  error T_SEMICOLON corpo_p dc_p { yyerrok; printf("Erro sintatico: Era na declaracao dos parametros, encontrado %d\n", yychar}
	| T_PROCEDURE T_ID parametros error corpo_p dc_p { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
	| T_PROCEDURE T_ID parametros T_SEMICOLON error dc_p { yyerrok; printf("Erro sintatico: Era na declaracao do corpo do programa, encontrado %d\n", yychar}
	| T_PROCEDURE T_ID parametros T_SEMICOLON corpo_p error { yyerrok; printf("Erro sintatico: Erro na declaracao de procedimentos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

parametros: T_L_PAREN lista_par T_R_PAREN {}
	| error lista_par T_R_PAREN { yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
	| T_L_PAREN error T_R_PAREN { yyerrok; printf("Erro sintatico: Erro na declaracao dos parametros, encontrado %d\n", yychar}
	| T_L_PAREN lista_par error { yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar)}
	| error { printf("erro sintatico\n"); }

lista_par : variaveis T_COLON tipo_var mais_par {}
	| error T_COLON tipo_var mais_par { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar}
	| variaveis error tipo_var mais_par { yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar}
	| variaveis T_COLON error mais_par { yyerrok; printf("Erro sintatico: Erro no tipo das variaveis, encontrado %d\n", yychar}
	| variaveis T_COLON tipo_var error { yyerrok; printf("Erro sintatico: Erro na declaracao de mais parametros, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

mais_par : T_SEMICOLON lista_par {}
	| error lista_par { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
	/*| T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao da lista de parametros, encontrado %d\n", yychar}*/
	| error { printf("erro sintatico\n"); }

/* Transformei a gramatica dc_loc some e corpo_p chama a dc_v direto */
corpo_p : dc_v T_BEGIN comandos T_END T_SEMICOLON {}
	| error T_BEGIN comandos T_END T_SEMICOLON { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis locais, encontrado %d\n", yychar}
	| dc_v error comandos T_END T_SEMICOLON { yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar}
	| dc_v T_BEGIN error T_END T_SEMICOLON { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
	| dc_v T_BEGIN comandos error T_SEMICOLON { yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar}
	| dc_v T_BEGIN comandos T_END error { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

/* Nao eh mais necessario devido a transformacao da gramatica feita acima
dc_loc : dc_v {}
	| error { printf("erro sintatico\n"); }
*/
lista_arg : T_L_PAREN argumentos T_R_PAREN {}
	| error argumentos T_R_PAREN { yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
	| T_L_PAREN error T_R_PAREN { yyerrok; printf("Erro sintatico: Erro na declaracao dos argumentos, encontrado %d\n", yychar}
	| T_L_PAREN argumentos error { yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

argumentos : T_ID mais_ident {}
	| error mais_ident { yyerrok; printf("Erro sintatico: Era esperado o comando 'ID', encontrado %d\n", yychar}
	| T_ID error { yyerrok; printf("Erro sintatico: Erro na declaracao de mais argumentos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

mais_ident : T_SEMICOLON argumentos {}
	| error argumentos { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
	/*| T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao dos argumentos, encontrado %d\n", yychar}*/
	| error { printf("erro sintatico\n"); }

pfalsa : T_ELSE cmd {}
	| error cmd { yyerrok; printf("Erro sintatico: Era esperado o comando 'else', encontrado %d\n", yychar}
	| T_ELSE error { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

comandos : cmd T_SEMICOLON comandos {}
	| error T_SEMICOLON comandos { yyerrok; printf("Erro sintatico: Erro no comando, encontrado %d\n", yychar}
	| cmd error comandos { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
	| cmd T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

cmd : T_READ T_L_PAREN variaveis T_R_PAREN {}
	| T_WRITE T_L_PAREN variaveis T_R_PAREN {}
	| T_WHILE T_L_PAREN condicao T_R_PAREN T_DO cmd {}
	| T_IF condicao T_THEN cmd pfalsa {}
	| T_ID T_ASSIGN expressao {}
	| T_ID lista_arg {}
	| T_BEGIN comandos T_END {}
	| error { printf("erro sintatico\n"); }

condicao: expressao relacao expressao
	| error relacao expressao { yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
	| expressao error expressao { yyerrok; printf("Erro sintatico: Erro na declaracao da relcao, encontrado %d\n", yychar}
	| expressao relacao error { yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

relacao: T_EQUAL {}
	| T_DIFF {}
	| T_GREATER_EQ {}
	| T_LESSER_EQ {}
	| T_GREATER {}
	| T_LESSER {}
	/*| error { printf("erro sintatico\n"); }*/

expressao: termo outros_termos
	| error outros_termos { yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
	| termo error { yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

op_un: T_PLUS
	| T_MINUS
	/*| error { printf("erro sintatico\n"); }*/

outros_termos: op_ad termo outros_termos
	| error termo outros_termos { yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
	| op_ad error outros_termos { yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
	| op_ad termo error { yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

op_ad: T_PLUS
	| T_MINUS
	/*| error { printf("erro sintatico\n"); }*/

termo: op_un fator mais_fatores
	| error fator mais_fatores { yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
	| op_un error mais_fatores { yyerrok; printf("Erro sintatico: Erro na declaracao de fator, encontrado %d\n", yychar}
	| op_un fator error { yyerrok; printf("Erro sintatico: Erro na declaracao de mais fatores, encontrado %d\n", yychar}
	| error { printf("erro sintatico\n"); }

mais_fatores: op_mul fator mais_fatores
	| error { printf("erro sintatico\n"); }

op_mul: T_TIMES
	| T_DIVISION
	| error { printf("erro sintatico\n"); }

fator: T_ID
	| numero
	| T_L_PAREN expressao T_R_PAREN

numero: T_INUMBER
	| T_RNUMBER
	| error { printf("erro sintatico\n"); }

