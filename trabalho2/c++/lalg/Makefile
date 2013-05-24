all:
	bison lalg.y
	flex lalg.l
	g++ lex.Lalg.cc lalg.tab.c -o lalg
	
clean:
	rm -rf lalg.tab.c lalg.tab.h location.hh position.hh stack.hh
	rm -rf lex.yy.cc
	rm -rf lalg
