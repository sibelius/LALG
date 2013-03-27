/* 
 * LALG Lexical Analiser
 */


letter [a-zA-z]
digit [0-9]
nonblank [^ \t]
relation "="|"<>"|">="|"<="|">"|"<"
op_add "+"|"-"
op_mul "*"|"/"
%%


"{"[^}]*"}"	{ printf("%s - comentario\n", yytext); } /* Ignore the comments */ 
"{"[^}]*	{ 
	printf("%s - comentario não fechado\n", yytext); /* Error - Comment not closed */
}

[ \r\t\n]+ {} /* Eliminate white spaces */

{digit}+ {
	printf("%s - simb_num_inteiro\n", yytext); /* Integer number */
}

{digit}+"."{digit}+	{
	printf("%s - simb_num_real\n", yytext); /* Real number */
}

{letter}+({letter}|{digit})*	{
	printf("%s - id\n", yytext); /* Identifier rule */
}

{relation}	printf("%s - simb_relacao\n", yytext);
{op_add}	printf("%s - simb_op_add\n", yytext);
{op_mul}	printf("%s - simb_op_mul\n", yytext);
":=" 		printf("%s - simb_atrib\n", yytext);
";"			printf("%s - simb_ponto_virgula\n", yytext); 	
":"			printf("%s - simb_dois_pontos\n", yytext); 	
"("			printf("%s - simb_abre_parentese\n", yytext); 	
")"			printf("%s - simb_fecha_parentese\n", yytext); 	
","			printf("%s - simb_virgula\n", yytext); 	
"."			printf("%s - simb_ponto\n", yytext);

.	{
	printf("%s - simb_unk\n", yytext); /* Unknowns symbols */
}
%%

main()
{
  yylex();
}

