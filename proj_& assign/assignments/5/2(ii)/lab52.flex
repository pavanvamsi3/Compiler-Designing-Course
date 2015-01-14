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
				int c0=0,c1=0,f=0;
				len=strlen(yytext);
				if(len==4)
				{
					if(yytext[3]=='5' || yytext[3]=='0')
					printf("Divisible By 5, So Accept\n");
				}
				for(i=0;i<len;i++)
				{
					if(yytext[i]=='0')
					c0++;
					else
					if(yytext[i]=='1')
					c1++;
					else
					f=1;
				}

				if(f==0)
				{
					if(c1%2==0 && c0%2==0)
					printf("Aceept\n");
					else
					printf("Not even");
				}
				else
				printf("Other character");
            }

%%
int main (void) {
	yylex ();
	return 0;
}