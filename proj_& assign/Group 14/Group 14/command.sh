lex project.l
yacc -d project.y
cc y.tab.c lex.yy.c -o main
