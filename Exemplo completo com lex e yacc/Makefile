all:
	bison sample.y -d -v
	gcc -c sample.tab.c
	gcc -c simbolTable.c
	flex sample.l
	gcc -DYYDEBUG -c lex.yy.c 
	gcc -DYYDEBUG -o Compiler lex.yy.o sample.tab.o simbolTable.o

clean:
	rm Compiler sample.output sample.tab.c sample.tab.h sample.tab.o lex.yy.c lex.yy.o code.p
