/* 
 * LALG Lexical Analiser
 */

/*%option noyywrap*/

%{
	#include <stdio.h>
	#include <string.h>
	#include "ListaLigada/ListaLigadaVar.h"
	#include "ListaLigada/ListaLigadaInt.h"
    #include "lalg.tab.h"
	
	extern YYSTYPE yylval;
	
	int comment = 0;
	
	int num_lines=1;	
	void count(); /* utilizado para verificar a coluna do erro */
	void printError(int error, const char* cadeia); /*imprime os erros lexicos */
%}
%option yylineno

/* definindo as expressoes auxiliares */
letter [a-zA-z]
digit [0-9]
nonblank [^ \t]
relation "="|"<>"|">="|"<="|">"|"<"
op_add "+"|"-"
op_mul "*"|"/"

seq_nao_numerica  [-!~]{-}[()/\*-+,:=.;:<>]
seq_nao_literal  [!-~]{-}[:<>;.=:,+\-*/()]

%%

"{"[^}\n}]*"}"	    {} /* Ignore the comments */ 
"{"[^}\n]*"\n"      {
	count(); 
	printError(ERR_COMMENT, yytext);
	return ERR_COMMENT;  /* Error - Comment not closed */ 
}

[	 \r\t]+          {count();} /* Eliminate white spaces */

\n { count(); num_lines++; }	/* Count lines */

"program" { count(); return T_PROGRAM;}			
"begin" { count(); return T_BEGIN;}
"end" { count(); return T_END; }		    
"var" { count(); return T_VAR; }
"const" { count(); return T_CONST; }		
"real" { count(); return T_REAL;}		
"integer" { count(); return T_INTEGER;}		
"procedure" { count(); return T_PROCEDURE;}	
"read" { count(); return T_READ;}		
"write" { count(); return T_WRITE;}		
"while" { count(); return T_WHILE;}		
"if" { count(); return  T_IF;}		    
"then" { count(); return T_THEN;}		
"else" { count(); return T_ELSE;}		
"for" { count(); return  T_FOR;}
"to" { count(); return T_TO;}
"do" { count(); return T_DO;}

"="  {
	count(); return T_EQUAL;
}
"<>" {
	count(); return T_DIFF;
}      
">=" {
	count(); return T_GREATER_EQ;
}
"<=" {
	count(); return T_LESSER_EQ;
} 
">"  {
	count(); return T_GREATER;
}   
"<"  {
	count(); return T_LESSER;
}    
"+"  {
	count(); return T_PLUS;
}      
"-"  {
	count(); return T_MINUS;
}     
"*"  {
	count(); return T_TIMES;
}     
"/"  {
	count(); return T_DIVISION;
}  
":=" {
	count(); return T_ASSIGN;
}    
";"	 {
	count(); return T_SEMICOLON;
} 
":"  {
	count(); return T_COLON;
}     
"("	 {
	count(); return T_L_PAREN;
}          
")"	 {
	count(); return T_R_PAREN;
}          
","	 {
	count(); return T_COMMA;
}     
"."	 {
	count(); return T_DOT;
}       

{digit}+ {
	yylval.i_number = atoi(yytext); count(); return T_INUMBER;
}

{digit}+"."{digit}+	{
	yylval.r_number = atof(yytext); count(); return T_RNUMBER;
}

{letter}+({letter}|{digit}){50,}			{	
	count(); 
	printError(ERR_LONG_ID, yytext);
	return ERR_LONG_ID;
}

{letter}+({letter}|{digit})* {
	yylval.name = strdup( yytext ); count(); return T_ID; //checkReservedWord(yytext);
}


{digit}+{seq_nao_numerica}* { 
	count(); 
	printError(ERR_MF_INTEGER, yytext);
	return ERR_MF_INTEGER;
}

{digit}+{seq_nao_numerica}*"."{digit}+{seq_nao_numerica}* {
	count(); 
	printError(ERR_MF_REAL, yytext);
	return ERR_MF_REAL;
}

{letter}+{seq_nao_literal}* { 
	count(); 
	printError(ERR_MF_ID, yytext);
	return(ERR_MF_ID);
}

.	{	
	count(); 
	printError(ERR_UNKNOWN, yytext);
	return ERR_UNKNOWN;
}

%%

int yywrap(void){}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
}

void printError(int error, const char* cadeia) {
	switch(error) {
		case ERR_MF_ID:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Identificador mal formado\n", num_lines, column);
			break;
		case ERR_MF_INTEGER:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Numero inteiro mal formado\n",num_lines, column);
			break;
		case ERR_MF_REAL:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Numero real mal formado\n",num_lines, column);
			break;
		case ERR_LONG_ID:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Identificador muito longo (+50 caracteres)\n",num_lines, column);
			break;
		case ERR_COMMENT:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Comentario nao fechado\n",num_lines, column);
			break;
		case ERR_UNKNOWN:
			printf("Erro Lexico:    Linha %d, Coluna: %d. Simbolo nao pertence a linguagem\n",num_lines, column);
			break;
	}
}
