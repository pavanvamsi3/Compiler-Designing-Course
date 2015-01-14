cd java;flex java.l; bison -d java.y; gcc lex.yy.c java.tab.c -lfl  -o java_checker
