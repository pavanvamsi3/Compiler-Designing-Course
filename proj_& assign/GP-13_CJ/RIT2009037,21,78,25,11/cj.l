%{
	int file_type;			/* 0 : C, 1 : Java */
	int yylineno = 1;
%}

alpha [A-Za-z]
digit [0-9]

%%

[\t ]
\n				{ yylineno++; }

"implements"    		{ if(file_type == 1) return IMPLEMENTS;	else return ID; }
"package"       		{ if(file_type == 1) return PACKAGE;	else return ID; }
"throw"         		{ if(file_type == 1) return THROW;	else return ID; }
"private"       		{ if(file_type == 1) return PRIVATE;	else return ID; }
"throws"        		{ if(file_type == 1) return THROWS;	else return ID; }
"protected"     		{ if(file_type == 1) return PROTECTED;	else return ID; }
"extends"       		{ if(file_type == 1) return EXTENDS;	else return ID; }
"public"        		{ if(file_type == 1) return PUBLIC;	else return ID; }
"try"           		{ if(file_type == 1) return TRY;	else return ID; }
"interface"     		{ if(file_type == 1) return INTERFACE;	else return ID; }
"catch"        			{ if(file_type == 1) return CATCH;	else return ID; }
"static"        		{ if(file_type == 1) return STATIC;	else return ID; }
"class"         		{ if(file_type == 1) return CLASS;	else return ID; }
"new"           		{ if(file_type == 1) return NEW;	else return ID; }
"null"          		{ if(file_type == 1) return JNULL;	else return ID; }
"this"          		{ if(file_type == 1) return THIS;	else return ID; }

"main"				{ return MAIN; }
"break"         		{ return BREAK; }
"return"        		{ return RETURN; }

"while"         		{ return WHILE; }
"for"           		{ return FOR; }
"if"         			{ return IF; }
"else"          		{ return ELSE; }

"float"         		{ return FLOAT; }
"long"          		{ return LONG; }
"short"         		{ return SHORT; }
"char"          		{ return CHAR; }
"int"           		{ return INT; }
"double"       			{ return DOUBLE; }
"boolean"       		{ return BOOLEAN; }
"true"          		{ return BOOLLIT; }
"false"         		{ return BOOLLIT; }
"void"          		{ return VOID; }
"String"			{ if(file_type == 1) return STRING; else return ID;}

#include			{ if(file_type == 0) return HEADERC; }
import				{ if(file_type == 1) return HEADERJ; else return ID; }


[-+]?{digit}*\.?{digit}+	{ return NUM; }
{alpha}({alpha}|{digit})*	{ return ID; }
"<="				{ return LE; }
">="				{ return GE; }
"=="				{ return EQ; }
"!="				{ return NE; }
"||"				{ return OR; }
"&&"				{ return AND; }
.				{ return yytext[0]; }
%%
