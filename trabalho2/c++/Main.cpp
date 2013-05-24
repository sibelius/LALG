#include "WaffleshopScanner.h"
#include "WaffleshopParser.h"

// Entry Point
int main(int argc, char * argv[]) {
	Waffleshop::Parser parser;
	return parser.parse();
}

