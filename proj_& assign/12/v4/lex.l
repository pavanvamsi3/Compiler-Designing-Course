%{
#include <stdio.h>
#include "y.tab.h"
void count_char();
int count = 1;
%}

D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*


%option yylineno
%option noyywrap
%%

"break"			{ count_char(); return(BREAK); }
"execute"		{ count_char(); return(EXECUTE); }
"begin"	 		{ count_char(); return(START); }
"end"			{ count_char(); return(END); }
"case"			{ count_char(); return(CASE); }
"const"			{ count_char(); return(CONST); }
"continue"		{ count_char(); return(CONTINUE); }
"default"		{ count_char(); return(DEFAULT); }
"repeat"		{ count_char(); return(REPEAT); }
"until"			{ count_char(); return(UNTIL); }
"to"			{ count_char(); return(TO); }
"else"			{ count_char(); return(ELSE); }
"for"			{ count_char(); return(FOR); }
"goto"			{ count_char(); return(GOTO); }
"if"			{ count_char(); return(IF); }
"return"		{ count_char(); return(RETURN); }
"sizeof"		{ count_char(); return(SIZEOF); }
"static"		{ count_char(); return(STATIC); }
"struct"		{ count_char(); return(STRUCT); }
"switch"		{ count_char(); return(SWITCH); }
"union"			{ count_char(); return(UNION); }
"while"			{ count_char(); return(WHILE); }

{L}({L}|{D})*		{ count_char(); return(check_type()); }

0[xX]{H}+{IS}?		{ count_char(); return(CONSTANT); }
0{D}+{IS}?		{ count_char(); return(CONSTANT); }
{D}+{IS}?		{ count_char(); return(CONSTANT); }
'(\\.|[^\\'])+'		{ count_char(); return(CONSTANT); }

{D}+{E}{FS}?		{ count_char(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count_char(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count_char(); return(CONSTANT); }

\"(\\.|[^\\"])*\"	{ count_char(); return(STRING_LITERAL); }

"..."			{ count_char(); return(ELLIPSIS); }
">>"			{ count_char(); return(RIGHT_OP); }
"<<"			{ count_char(); return(LEFT_OP); }
"++"			{ count_char(); return(INC_OP); }
"--"			{ count_char(); return(DEC_OP); }
"->"			{ count_char(); return(PTR_OP); }
"&&"			{ count_char(); return(AND_OP); }
"||"			{ count_char(); return(OR_OP); }
"<="			{ count_char(); return(LE_OP); }
">="			{ count_char(); return(GE_OP); }
"=="			{ count_char(); return(EQ_OP); }
"!="			{ count_char(); return(NE_OP); }
";"			{ count_char(); return(';'); }
("{"|"<%")		{ count_char(); return('{'); }
("}"|"%>")		{ count_char(); return('}'); }
","			{ count_char(); return(','); }
":"			{ count_char(); return(':'); }
"="			{ count_char(); return('='); }
"<-"			{ count_char(); return(ASSIGN_OP); }
"("			{ count_char(); return('('); }
")"			{ count_char(); return(')'); }
("["|"<:")		{ count_char(); return('['); }
("]"|":>")		{ count_char(); return(']'); }
"."			{ count_char(); return('.'); }
"&"			{ count_char(); return('&'); }
"!"			{ count_char(); return('!'); }
"~"			{ count_char(); return('~'); }
"-"			{ count_char(); return('-'); }
"+"			{ count_char(); return('+'); }
"*"			{ count_char(); return('*'); }
"/"			{ count_char(); return('/'); }
"%"			{ count_char(); return('%'); }
"<"			{ count_char(); return('<'); }
">"			{ count_char(); return('>'); }
"^"			{ count_char(); return('^'); }
"|"			{ count_char(); return('|'); }
"?"			{ count_char(); return('?'); }

[ \t\v\n\f]		{ count_char(); }
.			{ count_char(); return(ANY_STRING);/* ignore bad characters */ }

%%

/*yywrap()
{
	return(1);
}*/



int column = 0;
int linecount = 1;

void count_char()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
//		if(column == 0)

		if (yytext[i] == '\n'){
			column = 0;
			linecount++;
			printf("\n%d\t", linecount);
		}
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	if(yytext[0]!='\n')
	ECHO;
}


int check_type()
{
	return(IDENTIFIER);
}


