all:
	bison lalg.y -d -v
	gcc -c lalg.tab.c
	flex lalg.lex
	gcc -c lex.yy.c 
	gcc -o Compiler lex.yy.o lalg.tab.o

debug:
	bison lalg.y -d -v
	gcc -c lalg.tab.c
	flex lalg.lex
	gcc -DYYDEBUG -c lex.yy.c 
	gcc -DYYDEBUG -o Compiler lex.yy.o lalg.tab.o

clean:
	rm Compiler lalg.output lalg.tab.c lalg.tab.h lalg.tab.o lex.yy.c lex.yy.o 
