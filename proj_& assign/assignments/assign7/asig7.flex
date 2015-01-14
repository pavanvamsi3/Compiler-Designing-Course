%{
#include<stdio.h>
%}
%option noyywrap
DIGIT [+ -]*[0-9]
%%

"include"|"iostream.h"|"stdio.h"|"using"|"namespace"|"std"|"for"|"define" {printf ("%s        Keyword\n ",yytext);}
"int"|"char"|"float"|"double"  {printf("%s	           Keyword \n ",yytext);}
"{"                    {printf("%s			    Brace Open\n",yytext);}
"}"                    {printf("%s				Brace Close\n",yytext);}
"("                    {printf("%s				Left Parenthesis\n",yytext);}
")"                    {printf("%s				Right Parenthesis\n",yytext);}
{DIGIT}+               {printf("%s				Integer\n",yytext);}
{DIGIT}+"."{DIGIT}+    {printf( "%s				Float\n ",yytext);}
"||"                   {printf("%s				Logical Operator\n",yytext);}
"="                    {printf("%s				Assignment Operator\n",yytext);}
";"                    {printf("%s				Semicolon\n",yytext);}
[a-zA-Z]+              {printf("%s				Identifier \n",yytext);};
"<"|">"|"#"            {printf("%s			    Punctuation \n",yytext);}
"\""                    {printf("%s			    Inverted Comma\n",yytext);}
" "
"\n"                     
%%
int main()
{
yyin = fopen("testfile.txt", "r");
yylex();
}
