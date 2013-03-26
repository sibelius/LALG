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

"{"[^}]*"}"	{} /* Ignore the comments */ 
"{"[^}]*	{ 
	printf("%s - comentario não fechado\n", yytext); /* Error - Comment not closed */
	yyterminate();
}

[ \r\t\n]+ {} /* Eliminate white spaces */


program		printf("%s - simb_program\n", yytext); 	
begin		printf("%s - simb_begin\n", yytext); 	
end			printf("%s - simb_end\n", yytext); 	
var			printf("%s - simb_var\n", yytext); 
const		printf("%s - simb_const\n", yytext); 
real		printf("%s - simb_real\n", yytext);
integer		printf("%s - simb_integer\n", yytext); 
procedure	printf("%s - simb_procedure\n", yytext); 
read		printf("%s - simb_read\n", yytext); 
write		printf("%s - simb_write\n", yytext); 
while		printf("%s - simb_while\n", yytext); 
if			printf("%s - simb_if\n", yytext); 
then		printf("%s - simb_then\n", yytext); 
else		printf("%s - simb_else\n", yytext); 

{relation}	printf("%s - simb_relation\n", yytext);
{op_add}	printf("%s - simb_op_add\n", yytext);
{op_mul}	printf("%s - simb_op_mul\n", yytext);

:= 			printf("%s - simb_assign\n", yytext);
;			printf("%s - simb_ponto_virgula\n", yytext); 	
:			printf("%s - simb_dois_pontos\n", yytext); 	
"("			printf("%s - simb_abre_parentese\n", yytext); 	
")"			printf("%s - simb_fecha_parentese\n", yytext); 	
,			printf("%s - simb_virgula\n", yytext); 	

{digit}+						printf("%s - simb_num_inteiro\n", yytext);
{digit}+"."{digit}+				printf("%s - simb_num_real\n", yytext);
{letter}+({letter}|{digit})*	printf("%s - id\n", yytext);

.	{
	printf("%s - simb_unk\n", yytext); /* Unknowns symbols */
}
%%

main()
{
  yylex();
}

