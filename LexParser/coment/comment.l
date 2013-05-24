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
"{"[^}]* "\n"  { 
	printf("%s - comentario não fechado\n", yytext); /* Error - Comment not closed */
}

[ \r\t\n]+ {} /* Eliminate white spaces */


.	{
	printf("%s - simb_unk\n", yytext); /* Unknowns symbols */
}
%%

main()
{
  yylex();
}

