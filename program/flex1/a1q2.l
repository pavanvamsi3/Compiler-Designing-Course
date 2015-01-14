/*** Definition section ***/

%{
/* C code to be copied verbatim */
#include <stdio.h>
%}

/* This tells flex to read only one input file */
%option noyywrap

%%
    /*** Rules section ***/

    /* [0-9]+ matches a string of one or more digits */
[a-z]*(ing)|[a-z]*(ed)|[a-z]*(en)|was|is  {
            /* yytext is a string containing the matched text. */
            printf("Saw a verb: %s\n", yytext);
        }
[a-z]*(ly) {
	    printf("Saw a adverb: %s\n", yytext);
	}


a|an|the {
	printf("Saw a article: %s\n", yytext);
	}

.|\n    {   /* Ignore all other characters. */   }

%%
/*** C Code section ***/

int main(void)
{
    /* Call the lexer, then quit. */
    yylex();
    return 0;
}
