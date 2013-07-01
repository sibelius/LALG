all:
	bison lalg.y -d -v
	gcc -c lalg.tab.c
	gcc -c simbolTable.c
	gcc -c codeGenerate.c
	gcc -c ListaLigada/ListaLigadaVar.c
	gcc -c ListaLigada/ListaLigadaVarType.c
	gcc -c ArvoreExpressao/expressionTree.c
	flex lalg.lex
	gcc -DYYDEBUG -c lex.yy.c 
	gcc -DYYDEBUG -o Compiler lex.yy.o lalg.tab.o simbolTable.o ListaLigadaVar.o ListaLigadaVarType.o codeGenerate.o expressionTree.o
clean:
	rm Compiler lalg.output lalg.tab.c lalg.tab.h lalg.tab.o lex.yy.c lex.yy.o simbolTable.o ListaLigadaVar.o ListaLigadaVarType.o codeGenerate.o expressionTree.o
