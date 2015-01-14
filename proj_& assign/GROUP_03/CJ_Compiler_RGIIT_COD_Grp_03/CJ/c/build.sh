cd c;flex c.l; bison -d c.y; gcc lex.yy.c c.tab.c -lfl  -o c_checker
