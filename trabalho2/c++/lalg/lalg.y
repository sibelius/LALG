%{
%}

%require "2.4.1"

%debug

%defines

/* esqueleto c++ */
%skeleton "lalr1.cc"

%define "namespace" "Lalg"
%define "parser_class_name" "LalgParser"
%parse-param { Lalg::FlexScanner &scanner }
%lex-param { Lalg::FlexScanner &scanner }

%error-verbose

%code requires {
	namespace Lalg {
		class FlexScanner;
	}
}

%code {
	// Prototipo da funcao yylex
	static int yylex(Lalg::LalgParser::semantic_type * yylval, Lalg::FlexScanner &scanner);
}

%{
	/*
	int main(int argc, char* argv[]) {
		Lalg::Parser parser;
		return parser.parse();
	}
	*/
%}

%union YYSTYPE {
	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
}

%token<i_number> T_INUMBER
%token<r_number> T_RNUMBER
%token T_PROGRAM 
%token T_BEGIN
%token T_END
%token T_VAR
%token T_CONST
%token T_REAL
%token T_INTEGER
%token T_PROCEDURE
%token T_READ
%token T_WRITE
%token T_WHILE
%token T_IF
%token T_THEN
%token T_ELSE
%token T_FOR
%token T_TO
%token T_DO
%token T_EQUAL
%token T_DIFF
%token T_GREATER_EQ
%token T_LESSER_EQ
%token T_GREATER
%token T_LESSER
%token T_PLUS
%token T_MINUS
%token T_TIMES
%token T_DIVISION
%token T_ASSIGN
%token T_SEMICOLON
%token T_COLON
%token T_L_PAREN
%token T_R_PAREN
%token T_COMMA
%token T_DOT
%token T_NINTEGER
%token T_NREAL
%token T_ID
%token ERR_MF_INTEGER
%token ERR_MF_REAL
%token ERR_MF_ID
%token ERR_LONG_ID
%token ERR_COMMENT
%token ERR_UNKNOWN       

%%

programa: T_PROGRAM {}

%%

// Funcao de erro
void Lalg::LalgParser::error(const Lalg::LalgParser::location_type &loc, const std::string &msg) {
	std::cerr << "Error: " << msg << std::endl;
}

#include "LalgScanner.h"
static int yylex(Lalg::LalgParser::semantic_type * yylval, Lalg::FlexScanner &scanner) {
	return scanner.yylex(yylval);
}
