#pragma once

namespace Waffleshop {
	class Parser {
		public:
			Parser() : parser(scanner) {}
		
			int parse() {
				return parser.parse();
			}
		
		private:
			Waffleshop::FlexScanner scanner;
			Waffleshop::BisonParser parser;
	};
}
