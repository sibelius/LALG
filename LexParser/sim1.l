/* 
 * LALG Lexical Analiser
 */
 
%{
#define SIMB_NUM_INTEIRO 1
%}


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
"{"[^}]*            { printf("%s - erro - comentario não fechado\n", yytext); /* Error - Comment not closed */ }

[ \r\t\n]+          {} /* Eliminate white spaces */


program		        { printf("%s - sim_program\n", yytext); 	}
begin		        { printf("%s - sim_begin\n", yytext); 		}
end		            { printf("%s - sim_end\n", yytext); 		}
var		            { printf("%s - sim_var\n", yytext); 		}
const		        { printf("%s - sim_const\n", yytext);		}	 	
real		        { printf("%s - sim_real\n", yytext);		}
integer		        { printf("%s - sim_integer\n", yytext); 	}
procedure	        { printf("%s - sim_procedure\n", yytext);	} 
read		        { printf("%s - sim_read\n", yytext); 		}
write		        { printf("%s - sim_write\n", yytext); 		}	
while		        { printf("%s - sim_while\n", yytext); 		}
if		            { printf("%s - sim_if\n", yytext); 		}
then		        { printf("%s - sim_then\n", yytext);		}	 
else		        { printf("%s - sim_else\n", yytext); 		}
for		            { printf("%s - sim_for\n", yytext);		}

{relation}	        { printf("%s - sim_relation\n", yytext);	}
{op_add}	        { printf("%s - sim_op_add\n", yytext);		}
{op_mul}        	{ printf("%s - sim_op_mul\n", yytext);		}
":=" 		        { printf("%s - sim_assign\n", yytext);		}
";"		            { printf("%s - sim_ponto_virgula\n", yytext); 	}
":"		            { printf("%s - sim_dois_pontos\n", yytext); 	}
"("		            { printf("%s - sim_abre_parentese\n", yytext); }
")"		            { printf("%s - sim_fecha_parentese\n", yytext);}
","		            { printf("%s - sim_virgula\n", yytext);	}
"."		            { printf("%s - sim_ponto\n", yytext); 		}	

{digit}+						{printf("%s - sim_num_inteiro\n", yytext); return SIMB_NUM_INTEIRO;}
{digit}+"."{digit}+					{printf("%s - sim_num_real\n", yytext);}

{letter}+({letter}|{digit}){50,}			{	printf("%s - erro - identificador muito grande\n", yytext);}
{letter}+({letter}|{digit})*				{printf("%s - sim_id\n", yytext);}


{digit}+{seq_nao_numerica}* { printf("%s - erro - numero inteiro mal formado\n", yytext); }
{digit}+{seq_nao_numerica}*"."{digit}+{seq_nao_numerica}*					{printf("%s - erro - num_real mal formado\n", yytext);}


{letter}+{seq_nao_literal}* { printf("%s - erro - identificador mal formado\n", yytext); } 

.	{	printf("%s - erro - simbolo nao pertencente a linguagem\n", yytext); } /* Unknowns symbols */

%%

int main()
{
    yylex();
    return 0;
}
