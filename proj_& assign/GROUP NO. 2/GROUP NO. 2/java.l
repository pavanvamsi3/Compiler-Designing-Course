D			[0-9]
L			[a-zA-Z_]
MIN                     [-+]

%{
#include <stdio.h>
#include "y.tab.h"
int count1 = 0;
void count();
%}
%option yylineno
%%
{MIN}{D}+|{D}+ 			{ count();return NUM;}
{MIN}{D}+"."{D}+|{D}+"."{D}+		{ count();return NUM; }
"abstract"              { count(); return(ABSTRACT);}
"boolean"              { count(); return(BOOLEAN);}
"byvalue"              { count(); return(BYVALUE); }
"byte"                     { count(); return(BYTE);}
"break"              { count(); return(BREAK);}

"case"			{ count(); return(CASE); }
"cast"                    { count(); return(CAST); }
"catch"                  { count(); return(CATCH);}
"char"			{ count(); return(CHAR); }
"class"                  {  count(); return(CLASS);}
"const"			{ count(); return(CONST); }
"continue"		{ count(); return(CONTINUE); }

"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }

"else"			{ count(); return(ELSE); }
"extends"               { count(); return(EXTENDS);}

"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"future" 		{ count(); return(FUTURE);}
"final" {count();  return(FINAL);}
"finally" {count();  return(FINALLY);}

"goto"			{ count(); return(GOTO); }
"generic" {count();  return(GENERIC);}

"if"			{ count(); return(IF); }
"implements" {count();  return(IMPLEMENTS);}
"import" {count();  return(IMPORT);}
"inner" {count();  return(INNER);}
"instanceof" {count();  return(INSTANCEOF);}
"interface" {count();  return(INTERFACE);}
"int"			{ count(); return(INT); }

"long"			{ count(); return(LONG); }

"native" {count();  return(NATIVE);}
"new" {count();  return(NEW);}
"null" {count();  return(JNULL);}
"operator" {count();  return(OPERATOR);}
"outer" {count();  return(OUTER);}

"package" {count();  return(PACKAGE);}
"private" {count();  return(PRIVATE);}
"protected" {count();  return(PROTECTED);}
"public" {count();  return(PUBLIC);}



"rest"		{ count(); return(REST); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"super"		{ count(); return(SUPER); }
"switch" {count();  return(SWITCH);}
"synchronized" {count();  return(SYNCHRONIZED);}


"static"		{ count(); return(STATIC); }

"this"		{ count(); return(THIS);}
"throw"          { count(); return(THROW);}
"throws"          { count(); return(THROWS);}
"transient"          { count(); return(TRANSIENT);}
"try"          { count(); return(TRY);}

"var"          { count(); return(VAR);}

"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while"			{ count(); return(WHILE); }
"boollit"          { count(); return(BOOLLIT);}


{L}({L}|{D})*		{ count(); return(IDENTIFIER); }



L?\"(\\.|[^\\"])*\"	{ count(); return(LITERAL); }


">>="			{ count(); return(ASS_SHR); }
"<<="			{ count(); return(ASS_SHL); }
"+="			{ count(); return(ASS_ADD); }
"-="			{ count(); return(ASS_SUB); }
"*="			{ count(); return(ASS_MUL); }
"/="			{ count(); return(ASS_DIV); }
"%="			{ count(); return(ASS_MOD); }
"&="			{ count(); return(ASS_AND); }
"^="			{ count(); return(ASS_OR); }
"|="			{ count(); return(ASS_XOR); }
">>=="          	{ count(); return(ASS_SHRR);}

">>"			{ count(); return(OP_SHR); }
"<<"			{ count(); return(OP_SHL); }
"<>"          { count(); return(OP_SHRR);}

"++"			{ count(); return(OP_INC); }
"--"			{ count(); return(OP_DEC); }
"&&"			{ count(); return(OP_LAND); }
"||"			{ count(); return(OP_LOR); }
"<="			{ count(); return(OP_LE); }
">="			{ count(); return(OP_GE); }
"=="			{ count(); return(OP_EQ); }
"!="			{ count(); return(OP_NE); }
";"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\f]		{ count(); }
[\n] {count1++;}
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
}
