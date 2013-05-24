%require "2.4.1"
%skeleton "lalr1.cc"
%defines
%define namespace "Waffleshop"
%define parser_class_name "BisonParser"
%parse-param { Waffleshop::FlexScanner &scanner }
%lex-param   { Waffleshop::FlexScanner &scanner }

%code requires {
	// Forward-declare the Scanner class; the Parser needs to be assigned a 
	// Scanner, but the Scanner can't be declared without the Parser
	namespace Waffleshop {
		class FlexScanner;
	}
}

%code {
	// Prototype for the yylex function
	static int yylex(Waffleshop::BisonParser::semantic_type * yylval, Waffleshop::FlexScanner &scanner);
}

%token INTEGER

%%

program
	: program INTEGER { std::cout << "INTEGER / 5 = " << ($2 / 5) << std::endl; }
	| INTEGER { std::cout << "INTEGER / 5 = " << ($1 / 5) << std::endl; }
	;

%%

// We have to implement the error function
void Waffleshop::BisonParser::error(const Waffleshop::BisonParser::location_type &loc, const std::string &msg) {
	std::cerr << "Error: " << msg << std::endl;
}

// Now that we have the Parser declared, we can declare the Scanner and implement
// the yylex function
#include "WaffleshopScanner.h"
static int yylex(Waffleshop::BisonParser::semantic_type * yylval, Waffleshop::FlexScanner &scanner) {
	return scanner.yylex(yylval);
}
