all:
	yacc -d -v sintatico.y
	flex lexico.l
	g++ lex.yy.c -lfl -std=gnu++0x 
clean:
	rm a.out lex.yy.c y.output y.tab.c y.tab.h
