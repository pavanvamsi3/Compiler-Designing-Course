D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "y.tab.h"
%}

%%
(\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*)	;

"include"		{ return(INCLUDE); }
"define"		{ return(DEFINE); }
"#"			{ return(HASH); }
"boolean"		{ return(BOOLEAN); }
"char"			{ return(CHAR); }
"byte"			{ return(BYTE); }
"short"			{ return(SHORT); }
"int"			{ return(INT); }
"long"			{ return(LONG); }
"float"			{ return(FLOAT); }
"double"		{ return(DOUBLE); }
"void"			{ return(VOID); }
"class"			{ return(CLASS); }
"package"		{ return(PACKAGE); }
"implements"		{ return(IMPLEMENTS); }
"import"		{ return(IMPORT); }
"interface"		{ return(INTERFACE); }
"abstract"		{ return(ABSTRACT); }
"extends"		{ return(EXTENDS); }
"final"			{ return(FINAL); }
"public"		{ return(PUBLIC); }
"protected"		{ return(PROTECTED); }
"private"		{ return(PRIVATE); }
"static"		{ return(STATIC); }
"transient"		{ return(TRANSIENT); }
"volatile"		{ return(VOLATILE); }
"native"		{ return(NATIVE); }
"synchronized"		{ return(SYNCHRONIZED); }

"<"			{ return('<'); }
">"			{ return('>'); }
\"			{ return('"'); }
"("			{ return('('); }
")"			{ return(')'); }
"."			{ return('.'); }
";"			{ return(';'); }
"*"			{ return('*'); }
"{"			{ return('{'); }

{L}({L}|{D})*		{ return(IDENTIFIER); }

0[xX]{H}+{IS}?		{ return(CONSTANT); }
0{D}+{IS}?		{ return(CONSTANT); }
{D}+{IS}?		{ return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ return(CONSTANT); }

{D}+{E}{FS}?		{ return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ return(STRING_LITERAL); }
%%
