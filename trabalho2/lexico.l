/* 
 * LALG Lexical Analiser
 */

%option noyywrap

%{

#include <string>
#include <unordered_map> // hash table
#include <stdexcept> // out_of_range

using namespace std;

extern "C"
{
	int yyparse();
	int yylex();  
}


enum tokenType {
    T_PROGRAM = 1,
    T_BEGIN,
    T_END,
    T_VAR,
    T_CONST,
    T_REAL,
    T_INTEGER,
    T_PROCEDURE,
    T_READ,
    T_WRITE,
    T_WHILE,
    T_IF,
    T_THEN,
    T_ELSE,
    T_FOR,
    T_TO,
    T_DO,

    T_EQUAL,
    T_DIFF,
    T_GREATER_EQ,
    T_LESSER_EQ,
    T_GREATER,
    T_LESSER,
    T_PLUS,
    T_MINUS,
    T_TIMES,
    T_DIVISION,
    T_ASSIGN,
    T_SEMICOLON,
    T_COLON,
    T_L_PAREN,
    T_R_PAREN,
    T_COMMA,
    T_DOT,
    T_INUMBER,
    T_RNUMBER,
    T_ID,
	
	ERR_MF_INTEGER,
    ERR_MF_REAL,
    ERR_MF_ID,
    ERR_LONG_ID,
    ERR_COMMENT,
    ERR_UNKNOWN       
};

int checkReservedWord(string yytext);

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
"{"[^}\n]*"\n"      {
	return ERR_COMMENT;  /* Error - Comment not closed */ 
}

[ \r\t\n]+          {} /* Eliminate white spaces */

"="  {
	return T_EQUAL;
}
"<>" {
	return T_DIFF;
}      
">=" {
	return T_GREATER_EQ;
}
"<=" {
	return T_LESSER_EQ;
} 
">"  {
	return T_GREATER;
}   
"<"  {
	return T_LESSER;
}    
"+"  {
	return T_PLUS;
}      
"-"  {
	return T_MINUS;
}     
"*"  {
	return T_TIMES;
}     
"/"  {
	return T_DIVISION;
}  
":=" {
	return T_ASSIGN;
}    
";"	 {
	return T_SEMICOLON;
} 
":"  {
	return T_COLON;
}     
"("	 {
	return T_L_PAREN;
}          
")"	 {
	return T_R_PAREN;
}          
","	 {
	return T_COMMA;
}     
"."	 {
	return T_DOT;
}       

{digit}+ {
	return T_INUMBER;
}
{digit}+"."{digit}+	{
	return T_RNUMBER;
}

{letter}+({letter}|{digit}){50,}			{	
	return ERR_LONG_ID;
}
{letter}+({letter}|{digit})* {
	return checkReservedWord(yytext);
}


{digit}+{seq_nao_numerica}* { 
	return ERR_MF_INTEGER;
}

{digit}+{seq_nao_numerica}*"."{digit}+{seq_nao_numerica}* {
	return ERR_MF_REAL;
}

{letter}+{seq_nao_literal}* { 
	return(ERR_MF_ID);
}

.	{	
	return ERR_UNKNOWN;
}

%%

unordered_map<string, int> reservedWords;

void init_reservedWords() {
	reservedWords = {
		{"program", T_PROGRAM},			
	    {"begin", T_BEGIN},
        {"end", T_END},		    
        {"var", T_VAR},		    
        {"const", T_CONST},		
        {"real", T_REAL},		
        {"integer", T_INTEGER},		
        {"procedure", T_PROCEDURE},	
        {"read", T_READ},		
        {"write", T_WRITE},		
        {"while", T_WHILE},		
        {"if", T_IF},		    
        {"then", T_THEN},		
        {"else", T_ELSE},		
        {"for", T_FOR},
		{"do", T_DO}
	};
}

using namespace std;

int checkReservedWord(string yytext) {	
	int tokenType;
	try {
		tokenType = reservedWords.at(yytext);
	} catch(out_of_range& our) {
		tokenType = T_ID;
	}
	return tokenType;
	
}
