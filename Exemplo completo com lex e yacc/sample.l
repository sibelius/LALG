
%{
	//definicoes
	#include "y.tab.h"
	#include <string.h>

	extern YYSTYPE yylval;

	int line = 0;
	int comment = 0;
%}

/*Definindo as expressoes auxiliares*/
DIGIT	[0-9]
LETTER 	[a-zA-Z]
SPACE	[" "\t\r]
LINE	[\n]

%%

{LINE}		{ line++; }
{DIGIT}+ 	{ yylval.i_number = atoi(yytext); return I_NUMBER; }
{DIGIT}+"."{DIGIT}+ { yylval.r_number = atof(yytext); return R_NUMBER; }

"in"		{ return IN; }
"let"		{ return LET; }

{LETTER}[{DIGIT}{LETTER}"-""_"]*		{ yylval.name = strdup( yytext ); return IDENT; }

","		{ return VIRG; }
":="		{ return ATRIB; }
"+"		{ return ADI; }
"-"		{ return SUB; }

{SPACE}+

.		{ printf("Erro lexico, cadeia nao reconhecida %s\n", yytext); return L_ERRO; }

%%
