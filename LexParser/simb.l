/* 
 * LALG Lexical Analiser
 */

%option noyywrap c++

%{

#include <string>
#include <iostream>
#include <unordered_map> // hash table
#include <stdexcept> // out_of_range

using namespace std;

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
    T_NINTEGER,
    T_NREAL,
    T_ID,
	
	ERR_MF_INTEGER,
    ERR_MF_REAL,
    ERR_MF_ID,
    ERR_LONG_ID,
    ERR_COMMENT,
    ERR_UNKNOWN       
};

string tokenName[] = {
	"",
	"simb_program",
	"simb_begin",
	"simb_end",
	"simb_var",
	"simb_const",
	"simb_real",
	"simb_integer",
	"simb_procedure",
	"simb_read",
	"simb_write",
	"simb_while",
	"simb_if",
	"simb_then",
	"simb_else",
	"simb_for",
	"simb_to",
	"simb_do",
       
	"simb_equal",
	"simb_diff",
	"simb_greater_eq",
	"simb_lesser_eq",
	"simb_greater",
	"simb_lesser",
	"simb_plus",
	"simb_minus",
	"simb_times",
	"simb_division",
	"simb_assign",
	"simb_semicolon",
	"simb_colon",
	"simb_l_paren",
	"simb_r_paren",
	"simb_comma",
	"simb_dot",
	"simb_num_integer",
	"simb_num_real",
	"simb_id"
};

string cadeia; /* Armazena a cadeia atual */

void printCadeiaToken(int type);
void printError(tokenType error);
int checkReservedWord();

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
"{"[^}]*            {
	cadeia = yytext;
	printError(ERR_COMMENT); 
	return ERR_COMMENT;  /* Error - Comment not closed */ 
}

[ \r\t\n]+          {} /* Eliminate white spaces */

"="  {
	cadeia = yytext;
	return T_EQUAL;
}
"<>" {
	cadeia = yytext;
	return T_DIFF;
}      
">=" {
	cadeia = yytext;
	return T_GREATER_EQ;
}
"<=" {
	cadeia = yytext;
	return T_LESSER_EQ;
} 
">"  {
	cadeia = yytext;
	return T_GREATER;
}   
"<"  {
	cadeia = yytext;
	return T_LESSER;
}    
"+"  {
	cadeia = yytext;
	return T_PLUS;
}      
"-"  {
	cadeia = yytext;
	return T_MINUS;
}     
"*"  {
	cadeia = yytext;
	return T_TIMES;
}     
"/"  {
	cadeia = yytext;
	return T_DIVISION;
}  
":=" {
	cadeia = yytext;
	return T_ASSIGN;
}    
";"	 {
	cadeia = yytext;
	return T_SEMICOLON;
} 
":"  {
	cadeia = yytext;
	return T_COLON;
}     
"("	 {
	cadeia = yytext;
	return T_L_PAREN;
}          
")"	 {
	cadeia = yytext;
	return T_R_PAREN;
}          
","	 {
	cadeia = yytext;
	return T_COMMA;
}     
"."	 {
	cadeia = yytext;
	return T_DOT;
}       

{digit}+ {
	cadeia = yytext;
	return T_NINTEGER;
}
{digit}+"."{digit}+	{
	cadeia = yytext;
	return T_NREAL;
}

{letter}+({letter}|{digit}){50,}			{	
	cadeia = yytext;
	printError(ERR_LONG_ID);
	return ERR_LONG_ID;
}
{letter}+({letter}|{digit})* {
	cadeia = yytext;
	int token = checkReservedWord();
	return token;
}


{digit}+{seq_nao_numerica}* { 
	cadeia = yytext;
	printError(ERR_MF_INTEGER);
	return ERR_MF_INTEGER;
}

{digit}+{seq_nao_numerica}*"."{digit}+{seq_nao_numerica}* {
	cadeia = yytext;
	printError(ERR_MF_REAL);
	return ERR_MF_REAL;
}

{letter}+{seq_nao_literal}* { 
	cadeia = yytext;
	printError(ERR_MF_ID);
	return(ERR_MF_ID);
}

.	{	
	cadeia = yytext;
	printError(ERR_UNKNOWN);
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

int main()
{
	int tokenType;
	init_reservedWords();
	FlexLexer* lexer = new yyFlexLexer;
    while( (tokenType = lexer->yylex()) != 0) {
	       printCadeiaToken(tokenType);
	}
	return 0;
}

int checkReservedWord() {	
	int tokenType;
	try {
		tokenType = reservedWords.at(cadeia);
	} catch(out_of_range& our) {
		tokenType = T_ID;
	}
	return tokenType;
	
}

void printCadeiaToken(int type) {
	if(type <= ERR_MF_INTEGER) {
		cout << cadeia << " - " << tokenName[type] << endl;		
	}
}

void printError(tokenType error) {
	switch(error) {
		case ERR_MF_INTEGER:
			cout << cadeia << " - erro - identificador mal formando" << endl;
			break;
		case ERR_MF_REAL:
			cout << cadeia << " - erro - numero real mal formado" << endl;
			break;
		case ERR_LONG_ID:
			cout << cadeia << " - erro - identificador muito longo (+50 caracteres)" << endl;
			break;
		case ERR_COMMENT:
			cout << cadeia << " - erro - comentario nao fechado" << endl;
			break;
		case ERR_UNKNOWN:
			cout << cadeia << " - erro - simbolo nao pertence a linguagem" << endl;
			break;
	}
}
