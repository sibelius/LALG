/* 
 * LALG Lexical Analiser
 */
%{
#include "y.tab.h"
extern int yylval;
int error_code;
%}

letter [a-zA-z]
digit [0-9]
nonblank [^ \t]
relation "="|"<>"|">="|"<="|">"|"<"
op_add "+"|"-"
op_mul "*"|"/"
%%

"{"[^}\n}]*"}"	{} /* Ignore the comments */ 
"{"[^}]*	{ 
	printf("%s - comentario não fechado\n", yytext); /* Error - Comment not closed */
	yyterminate();
}

[ \r\t\n]+ {} /* Eliminate white spaces */

{relation}	{ return SIMB_RELATION;	}
{op_add}	{ return SIMB_OP_ADD;		}
{op_mul}	{ return SIMB_OP_MUL;		}
":=" 		{ return SIMB_ASSIGN;		}
";"		{ return SIMB_PONTO_VIRGULA; 	}
":"		{ return SIMB_DOIS_PONTOS; 	}
"("		{ return SIMB_ABRE_PARENTESE; }
")"		{ return SIMB_FECHA_PARENTESE;}
","		{ return SIMB_VIRGULA;	}
"."		{ return SIMB_PONTO; 		}	

{digit}+						{ return SIMB_NUM_INTEIRO;}
{digit}+"."{digit}+					{ return SIMB_NUM_REAL; }
{digit}+({digit}|{letter})*"."({digit}|{letter})*	{ printf("%s - erro - numero real mal formado\n", yytext);}

{letter}+({letter}|{digit}){50,}			{printf("%s - identificador muito grande\n", yytext);}

{letter}+({letter}|{digit})*				{return SIMB_ID;}


.	{	printf("%s - unk\n", yytext); return yytext[0]; } /* Unknowns symbols */

%%
