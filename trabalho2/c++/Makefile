all:
	yacc -d waffleshop.y
	flex waffleshop.l
	g++ lex.yy.cc Main.cpp y.tab.c -o waffleshop
	
clean:
	rm -rf y.tab.c y.tab.h location.hh position.hh stack.hh
	rm -rf lex.yy.cc
	rm -rf waffleshop
