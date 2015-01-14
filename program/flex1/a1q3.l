/* scanner for a toy Pascal-like language */

%{
/* need this for the call to atof() below */
#include <math.h>
%}

DIGIT    [0-9]
ID       [a-z][a-z0-9]*

%%

{DIGIT}+    {if(atoi(yytext)<=65536)
            printf( "Integer\n", yytext,
                    atoi( yytext ) );
		else printf("Out of range\n");
            }

{DIGIT}+"."{DIGIT}*        {
            printf( "Float\n", yytext,
                    atof( yytext ) );
            }
 /*
if|then|begin|end|procedure|function        {
            printf( "Keyword\n", yytext );
            }

{ID}        printf( "Identifier\n", yytext );
*/
"+"|"-"|"*"|"/"   printf( "Operator %s\n", yytext );
 /*
"{"[^}\n]*"}"     /* eat up one-line comments */

 [ \t\n]+          /* eat up whitespace 

.           printf( "Unrecognized character: %s\n", yytext );
 */
%%

main( argc, argv )
int argc;
char **argv;
    {
    ++argv, --argc;  /* skip over program name */
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );
    else
            yyin = stdin;

    yylex();
    }

