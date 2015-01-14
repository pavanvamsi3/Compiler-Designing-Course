%{
/* C code to be copied verbatim */
#include <math.h>
#include<string.h>
int i,len,s;
%}

/* This tells flex to read only one input file */
%option noyywrap

DIGIT [0-9]
%%

[\t ]+		/* ignore whitespace */ ;


{DIGIT}+ { 
    
	     s=1;
         len=strlen(yytext);
for(i=0;i<len;i++)
s=s*10+yytext[i];
if(s>=-32767 && s<=32767)
printf( "it is An integer: %s\n", yytext);
else 
printf( "Out of Integer Range: %s\n", yytext);

}
{DIGIT}+"."{DIGIT}+        {
            printf( "A float: %s (%g)\n\n", yytext);
					}

%%
int main (void) {
	yylex ();
	return 0;
}
