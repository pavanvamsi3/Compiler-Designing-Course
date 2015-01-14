
%{
#include <stdio.h>
#include "y.tab.h"
int count = 1;
//int yylinenumber = 1;
%}

%option yylineno

alpha [A-Za-z]
digit [0-9]
alphanum ({alpha}|{digit})

%%

"abstract"      return ABSTRACT;
"boolean"       return BOOLEAN;
"break"         return BREAK;
"byte"          return BYTE;
"case"          return CASE;
"catch"         return CATCH;
"char"          return CHAR;
"class"         return CLASS;
"const"         return CONST;
"continue"      return CONTINUE;
"default"       return DEFAULT;
"do"            return DO;
"double"        return DOUBLE;
"else"          return ELSE;
"extends"       return EXTENDS;
"final"         return FINAL;
"finally"       return FINALLY;
"float"         return FLOAT;
"for"           return FOR;
"goto"          return GOTO;
"if"            return IF;
"implements"    return IMPLEMENTS;
"import"        return IMPORT;
"inner"         return INNER;
"instanceof"    return INSTANCEOF;
"int"           return INT;
"interface"     return INTERFACE;
"long"          return LONG;
"native"        return NATIVE;
"new"           return NEW;
"null"          return JNULL;
"package"       return PACKAGE;
"private"       return PRIVATE;
"protected"     return PROTECTED;
"public"        return PUBLIC;
"return"        return RETURN;
"short"         return SHORT;
"static"        return STATIC;
"super"         return SUPER;
"switch"        return SWITCH;
"synchronized"  return SYNCHRONIZED;
"this"          return THIS;
"throw"         return THROW;
"throws"        return THROWS;
"transient"     return TRANSIENT;
"try"           return TRY;
"void"          return VOID;
"volatile"      return VOLATILE;
"while"         return WHILE;
"++"            return OP_INC;
"--"            return OP_DEC;
"<<"            return OP_SHL;
">>"            return OP_SHR;
">>>"           return OP_SHRR;
">="            return OP_GE;
"<="            return OP_LE;
"=="            return OP_EQ;
"!="            return OP_NE;
"&&"            return OP_LAND;
"||"            return OP_LOR;
"[\[]{ }*[\]]"  return OP_DIM;
"*="            return ASS_MUL;
"/="            return ASS_DIV;
"%="            return ASS_MOD;
"+="            return ASS_ADD;
"-="            return ASS_SUB;
"<<="           return ASS_SHL;
">>>="          return ASS_SHRR;
">>="           return ASS_SHR;
"&&="           return ASS_AND;
"^="            return ASS_XOR;
"||="           return ASS_OR;
"false"         return BOOLLIT;
"true"          return BOOLLIT;
"{"             return yytext[0];
"}"             return yytext[0];
"("             return yytext[0];
")"             return yytext[0];
";"             return yytext[0];
","             return yytext[0];
"."             return yytext[0];
"*"             return yytext[0];
"/"             return yytext[0];
"-"             return yytext[0];
"+"             return yytext[0];
"<"             return yytext[0];
">"             return yytext[0];
"&"             return yytext[0];
"|"             return yytext[0];
"="             return yytext[0];

{alpha}({alphanum}|"_")*        return IDENTIFIER;
{digit}+        return LITERAL;
"//".*"\n" /* Comment */
"/*"(.|"\n")*"*\\" /* Comment */
[ \t\r] /* Whitespace */
"\n" {count++;}

%%

int yywrap()
{
        return 1;
}
