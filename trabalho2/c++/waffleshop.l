%{
	#include "WaffleshopScanner.h"
%}

%option nodefault yyclass="FlexScanner" noyywrap c++

%%

[1-9][0-9]*  { *yylval = atoi(yytext); return Waffleshop::BisonParser::token::INTEGER; }
.+|\n        { /* Ignore everything that isn't an integer */ }

