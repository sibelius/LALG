//Definindo tipo dos nao terminais 
%type <snode> number
%type <snode> exp
%type <math_op> op

%%

programa: T_PROGRAM T_ID T_SEMICOLON corpo { end(); };
	| error T_ID T_SEMICOLON corpo { yyerrok; printf("Erro sintatico: Era esperado o comando 'program', encontrado %d\n", yychar); }
	| T_PROGRAM error T_SEMICOLON corpo { yyerrok; printf("Erro sintatico: Era esperado o comando 'ident', encontrado %d\n", yychar); }
	| T_PROGRAM T_ID error corpo { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
	| T_PROGRAM T_ID T_SEMICOLON error { yyerrok; printf("Erro sintatico: Erro na declaracao do corpo do programa, encontrado %d\n", yychar); }
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
	| error { printf("erro sintatico\n"); }

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

tipo_var : real {}
	| integer {}
	| error { printf("erro sintatico\n"); }

variaveis : T_ID mais_var {}
	| T_ID mais_var
	| T_ID mais_var

mais_var : T_COMMA variaveis {}| λ
	| error { printf("erro sintatico\n"); }

dc_p : T_PROCEDURE T_ID parametros T_SEMICOLON corpo_p dc_p {}| λ
	| error { printf("erro sintatico\n"); }

parametros : L_PAREN lista_par R_PAREN {}| λ
	| error { printf("erro sintatico\n"); }

lista_par : variaveis T_COLON tipo_var mais_par {}
	| error { printf("erro sintatico\n"); }

mais_par : T_SEMICOLON lista_par {}| λ
	| error { printf("erro sintatico\n"); }

corpo_p : dc_loc T_BEGIN comandos T_END T_SEMICOLON {}
	| error { printf("erro sintatico\n"); }

dc_loc : dc_v {}
	| error { printf("erro sintatico\n"); }

lista_arg : L_PAREN argumentos R_PAREN {}| λ
	| error { printf("erro sintatico\n"); }

argumentos : T_ID mais_ident {}
	| error { printf("erro sintatico\n"); }

mais_ident : T_SEMICOLON argumentos {}| λ
	| error { printf("erro sintatico\n"); }

pfalsa : T_ELSE cmd {}| λ
	| error { printf("erro sintatico\n"); }

comandos : cmd T_SEMICOLON comandos {}| λ
	| error { printf("erro sintatico\n"); }

/* terminarei até comandos se for fazer algo faz daqui para baixo */

