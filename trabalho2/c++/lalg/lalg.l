%{
	#include "lalgscanner.h"

	typedef Lalg::LalgParser::token token;
%}

/* Geracao de classes c++ */
%option c++

/* LalgFlexLexer */
%option prefix="Lalg"

/* Otimiza */
%option batch

/* Nome da nossa class lexica */
%option yyclass="LalgScanner"

%option nodefault

%option noyywrap

%option debug

letter [a-zA-z]
digit [0-9]
nonblank [^ \t]
relation "="|"<>"|">="|"<="|">"|"<"
op_add "+"|"-"
op_mul "*"|"/"

seq_nao_numerica  [-!~]{-}[()/\*-+,:=.;:<>]
seq_nao_literal  [!-~]{-}[:<>;.=:,+\-*/()]

%%

{digit}+ {
	*yylval = atoi(yytext);
	return token::T_NINTEGER;
}
{digit}+"."{digit}+	{
	*yylval = atof(yytext);
	return token::T_NREAL;
}

%%

namespace Lalg {
	LalgScanner::LalgScanner(std::istream* in,
		std::ostream* out)
		: LalgFlexLexer(in, out)
	{
	}

	LalgScanner::~LalgScanner()
	{
	}

	void LalgScanner::set_debug(bool b)
	{
		yy_flex_debug = b;
	}

	#ifdef yylex
	#undef yylex
	#endif

	int LalgFlexLexer::yylex()
	{
		std::cerr << "in LalgFlexLexer::yylex()!" << std::endl;
		return 0;
	}

	int LalgFlexLexer::yywrap()
	{
		return 1;
	}


}
