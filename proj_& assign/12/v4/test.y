%{
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int count;
void       yyerror(  char *msg );
int        yylex();

//S         : ST {printf("Input accepted\n"); exit(0);}

%}

%token ID NUM FOR LE GE EQ NE OR AND INT
%right "="
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '!'

%%
ST : INT ID;
   	| INT ID error {printf("there is a syntex error in %d \n" ,count);
			yyerrok;} 
	| INT ID error {printf("there is a error in %d \n" ,count);yyerrok; } ST
	| S
	; 
S	: FOR '(' E ';' E2 ';' E ')' DEF
           |FOR'(' E ';' E2 ';' E  error 
	 {
          /* this error is due to a missing 'e' */
          printf("Error in Line %d: Expected ')' \n", yylineno);
               yyclearin;
                  yyerrok; 
         } S
	
//	| 
	| INT ID ';'
	|INT ID error  
	{
	printf(" missing semicolon %d \n",yylineno);
		yyclearin;
		yyerrok;
	} S
	|INT ID error  
	{
	printf(" missing semicolon %d \n",yylineno);
		yyclearin;
		yyerrok;
	} 
 
//	| ST
/*	| error
		{
		printf(" %d \n" , count);
			yyclearin;
			yyerrok;
}*/	
	;
DEF    : '{' BODY '}'
           | E';'
           | S
           | error
{	   printf("Error in Line %d: Expected crrct input \n", yylineno);
    //            yyclearin;
      //            yyerrok; 
        }
	| INT ID error 
{   printf("Error in Line %d: Expected ';' \n", count);
  //              yyclearin;
                  yyerrok; 
        }

           ;
BODY  : BODY BODY
           | E ';'       
           | S
           |            
           ;

E        : ID '=' E
          | E '+' E
          | E '-' E
          | E '*' E
          | E '/' E
          | E '<' E
          | E '>' E
          | E LE E
          | E GE E
          | E EQ E
          | E NE E
          | E OR E
          | E AND E
          | E '+' '+'
          | E '-' '-'
          | ID  
          | NUM
          ;


E2     : E'<'E
         | E'>'E
         | E LE E
         | E GE E
         | E EQ E
         | E NE E
         | E OR E
         | E AND E
         ;
%%

#include "lex.yy.c"
#if YYDEBUG
extern int yydebug;
#endif




int main() {
#if YYDEBUG
  if (argc > 1) yydebug = 1;
  else yydebug = 0;
#endif



FILE *myfile = fopen("sahu.c", "r");
	// make sure it's valid:
/*	if (!myfile) {
		printf( "I can't open file!\n"); //<< endl;
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	// parse through the input until there is no more:
	
	do {
	yyparse();
	} while (!feof(yyin));
	
*/

yyparse();
}

void yyerror(char *s){
		}




 //   printf("Enter the expression:\n");
    //yyparse();
//}

