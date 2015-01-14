%{
int count=0;
%}
digit [0-9]

alpha [A-Za-z]
%option yylineno
%option noyywrap


%%




[\t ]
int		return INT;
for             return FOR;
{digit}+    return NUM;
{alpha}({alpha}|{digit})* return ID;
"<="         return LE;
">="         return GE;
"=="         return EQ;
"!="          return NE;
"||"            return OR;
"&&"         return AND;
.                return yytext[0];
[\n] 		{count++;}
%%

