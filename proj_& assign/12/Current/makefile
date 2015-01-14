all:	lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -ll -ly
lex.yy.c:	
	lex lex.l
y.tab.c:
	yacc -d yacc.y
clean:
	rm lex.yy.c y.tab.c y.tab.h
