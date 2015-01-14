%{
/* C code to be copied verbatim */
#include <math.h>
int i,len,sum;
%}

/* This tells flex to read only one input file */
%option noyywrap

DIGIT [0-9]
%%

[\t ]+		/* ignore whitespace */ ;


{DIGIT}+ { 
				sum=0;
				len=strlen(yytext);
				for(i=0;i<len;i++)
				{
					sum=sum*10+(yytext[i]-'0');
				}
				if(sum >-32767 && sum<=32767) 
				printf("Integer");
				else
				printf("Not in integer range");
            }
{DIGIT}+"."{DIGIT}+        {
            printf( "Float");
					}

%%
int main (void) {
	yylex ();
	return 0;
}