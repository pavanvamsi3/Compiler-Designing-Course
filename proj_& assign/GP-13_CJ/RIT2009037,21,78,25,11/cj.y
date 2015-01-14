%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYERROR_VERBOSE_0

char err[100];
%}

%token PACKAGE CLASS THROW INTERFACE THROWS
%token EXTENDS IMPLEMENTS MAIN HEADERC HEADERJ RETURN BREAK NEW JNULL
%token LONG DOUBLE STRING
%token INT FLOAT CHAR SHORT VOID BOOLEAN BOOLLIT
%token PUBLIC PRIVATE PROTECTED TRY CATCH STATIC THIS
%token FOR WHILE IF ELSE
%token LE GE EQ NE OR AND
%token ID NUM DOT
%right "="
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/'
%left '!'

%%

S	:	HEADERS FUNC_C				{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	|	FUNC_C  				{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	|	PACKAGES IMPORTS CLASSHEADER		{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	|	PACKAGES CLASSHEADER			{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	|	IMPORTS CLASSHEADER			{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	|	CLASSHEADER				{ printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); }
	;

CLASS_HIERARCHY	:	CLASS_HIERARCHY '.' ID
	|	ID
	;

PACKAGES:	PACKAGE CLASS_HIERARCHY ';'
	;

IMPORTS	:	LIB_J
	|	LIB_J LIB_J
	;

HEADERS	:	LIB_C
	|	LIB_C LIB_C
	;

LIB_C	:	HEADERC '<' ID '.' ID '>'
	;

LIB_J	:	HEADERJ CLASS_HIERARCHY ';'
	|	HEADERJ CLASS_HIERARCHY '.' '*' ';'
	|	HEADERJ CLASS_HIERARCHY error						{ strcpy( err,"Package import error."); yyclearin; err_func(); yyerrok;}
	|	HEADERJ error ';'							{ strcpy( err,"Package import error."); yyclearin; err_func(); yyerrok;}
	;

DTYPE	:	INT
      	|	FLOAT
	|	DOUBLE
	|	CHAR
	|	LONG
	|	SHORT
	|	BOOLEAN
	|	VOID
	;

CLASSNAME	:	DTYPE
	|	CLASS_HIERARCHY
	;

CNAMELIST
        :	CLASS_HIERARCHY
        |	CNAMELIST ',' CLASS_HIERARCHY
        ;


PARAM	:	DTYPE ID ',' PARAM
	|	DTYPE ID
	| 	DTYPE ID '[' NUM ']' ',' PARAM
	|	DTYPE ID '[' ']' ',' PARAM
	|	DTYPE ID '[' ']'
	|	
	;

PARAM_C :	DTYPE ID ',' PARAM_C
	|	DTYPE ID
	| 	DTYPE ID '[' NUM ']' ',' PARAM_C
	|	DTYPE ID '[' ']' ',' PARAM_C
	|	DTYPE ID '[' ']'
	|	DTYPE '*' ID ',' PARAM_C
	|       DTYPE '*' ID
	|
	;

EXP	:	INIT2
	|	INIT3 '(' INIT2 ')'
	;

VAR	:	EXP ';' VAR
	|	EXP ';'
	;

ARG	:	ID_NUM ',' ARG
	|	ID_NUM
	|
	;

REA	:	'&' ID_NUM ',' REA
	|	ID_NUM ',' REA
	|	'&' ID_NUM
	|	ID_NUM
	;

SPEC	:	'%' ID SPEC
	|	'%' ID
	|	'%' NUM ID SPEC
	|	'%' NUM ID
	;

CLASSHEADER:	MODIFIERS CLASS ID EXTEND INTERFACES '{' FUNC_J '}'
        |	MODIFIERS CLASS ID EXTEND '{' FUNC_J '}'
        |	MODIFIERS CLASS ID INTERFACES '{' FUNC_J '}'
        |	CLASS ID EXTEND INTERFACES '{' FUNC_J '}'
        |	MODIFIERS CLASS ID '{' FUNC_J '}'
        |	CLASS ID EXTEND '{' FUNC_J '}'
        |	CLASS ID INTERFACES '{' FUNC_J '}'
        |	CLASS ID '{' FUNC_J '}'
        ;

MODIFIERS:	MODIFIER
        |	MODIFIERS MODIFIER
        ;

MODIFIER1:	MODIFIER
	|	MODIFIER1 MODIFIER
	|
	;

MODIFIER:	PUBLIC
        |	PROTECTED
        |	PRIVATE
        |	STATIC
        ;

EXTEND :	EXTENDS CLASSNAME 
        ;

INTERFACES:	IMPLEMENTS CNAMELIST
        ;

FUNC_C	:	DTYPE ID '(' PARAM_C ')' '{' COND_C '}' FUNC_C
	|	MAIN_C
	|	DTYPE ID '(' error ')' '{' COND_C '}' FUNC_C				{ strcpy( err,"Improper function parameter declaration.");  yyclearin; yyerrok; }
	|	DTYPE error '(' PARAM_C ')' '{' COND_C '}' FUNC_C				{ strcpy( err,"Invalid identifier.");  yyclearin; yyerrok; }
	|	error ID '(' PARAM_C ')' '{' COND_C '}' FUNC_C				{ strcpy( err,"Return type not defined."); yyclearin; yyerrok; }
	|	DTYPE error '(' error ')' '{' COND_C '}' FUNC_C				{ strcpy( err,"Improper identifier and parameter declaration.");  yyclearin; yyerrok; }
	|	error ID '(' error ')' '{' COND_C '}' FUNC_C				{ strcpy( err,"Return type and parameter declaration error."); yyclearin; yyerrok; }
	;

FUNC_J	:	MODIFIER1 DTYPE ID '(' PARAM ')' '{' COND_J '}' FUNC_J
	|	MAIN_J
	|	MODIFIER1 DTYPE ID '(' error ')' '{' COND_J '}' FUNC_J			{ strcpy( err,"Improper function parameter declaration."); yyclearin; err_func(); yyerrok; }
	|	MODIFIER1 DTYPE error '(' PARAM ')' '{' COND_J '}' FUNC_J		{ strcpy( err,"Invalid identifier."); yyclearin; err_func(); yyerrok; }
	|	MODIFIER1 error ID '(' PARAM ')' '{' COND_J '}' FUNC_J			{ strcpy( err,"Return type not defined."); yyclearin; err_func(); yyerrok; }
	|	MODIFIER1 DTYPE error '(' error ')' '{' COND_J '}' FUNC_J		{ strcpy( err,"Improper identifier and parameter declaration."); yyclearin; err_func(); yyerrok; }
	|	error ID '(' error ')' '{' COND_J '}' FUNC_J				{ strcpy( err,"Return type and parameter declaration error."); yyclearin; err_func(); yyerrok; }
	|
	;

MAIN_J	: 	PUBLIC STATIC VOID MAIN '(' STRING ID '[' ']' ')' THROWS ID '{' COND_J '}'
	| 	PUBLIC STATIC VOID MAIN '(' STRING ID '[' ']' ')' '{' COND_J '}'
	|	PUBLIC error VOID MAIN '(' STRING ID '[' ']' ')' '{' COND_J '}'          { strcpy( err,"Static Declaration error"); yyclearin; err_func(); yyerrok; }
	|       PUBLIC STATIC VOID error '(' STRING ID '[' ']' ')' '{' COND_J '}'        { strcpy( err,"No main found."); yyclearin; err_func(); yyerrok; }
	|       PUBLIC STATIC VOID MAIN '(' error ')' '{' COND_J '}'                     { strcpy( err,"Main function parameter."); yyclearin; err_func(); yyerrok; }
	;

MAIN_C	: 	INT MAIN '(' INT ID ',' CHAR '*' ID '[' ']' ')' '{' COND_C '}'
	|	INT MAIN '(' ')' '{' COND_C '}'
	;

COND_C	:	DTYPE ID ';' COND_C
	|	DTYPE '*' ID ';' COND_C
	|	DTYPE ID ';'
	|	DTYPE '*' ID ';'
	|	DTYPE ID '[' ID_NUM ']' ';' COND_C
	|	FOR '(' INIT1 EXP2 INIT3 ')' DEF_C
	| 	FOR '(' error EXP2 INIT3 ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop initialization, expected numeral,literal,+,-,/,*,<,>,;."); yyclearin; yyerrok; }
	| 	FOR '(' INIT1 error INIT3 ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop test expression ."); yyclearin; yyerrok; }
	| 	FOR '(' INIT1 EXP2 error ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; }
	| 	FOR '(' error error INIT3 ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop initialization/test expression, expected numeral,literal");  yyclearin; yyerrok; }
	| 	FOR '(' error EXP2 error ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop initialization/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; }
	| 	FOR '(' INIT1 error error ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop test/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; }
	| 	FOR '(' error error error ')' DEF_C					{ strcpy( err,"Wrong \"for\" loop initialization/test/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; }
	|	WHILE COND1 DEF_C
	|	WHILE COND2 DEF_C
	|	IF COND1 DEF_C
	|	IF COND2 DEF_C
	|	VAR COND_C
	|	VAR
	|	ID '(' '"' '%' ID '"' ',' REA ')' ';' COND_C
	|	ID '(' '"' '%' ID '"' ',' REA ')' ';'
	|	ID '(' '"' '%' ID '"' ',' ARG ')' ';' COND_C
	|	ID '(' '"' '%' ID '"' ',' ARG ')' ';'
	|	ID '(' ARG ')' ';' COND_C
        |       ID '(' ARG ')' ';'
	|	ID '(' '"' ID '"' ')' ';' COND_C
        |       ID '(' '"' ID '"' ')' ';'
	|	RET
        |       WHILE error DEF_C                                       		{ strcpy( err,"Wrong \"while\" loop test expression."); yyclearin; yyerrok; }
	|	DTYPE error ';' COND_C							{ strcpy( err,"Identifier not defined."); yyclearin; yyerrok; }
	|	DTYPE '*' error ';' COND_C						{ strcpy( err,"Identifier not defined."); yyclearin; yyerrok; }
	|	DTYPE ID error COND_C							{ strcpy( err,"Expected ';' after expression."); yyclearin; yyerrok; }
	|	error COND_C								{ strcpy( err,"Conditional error."); yyclearin; yyerrok; }
	;

COND_J	:	DTYPE ID ';' COND_J
	|	DTYPE ID '[' ']' '=' NEW DTYPE '[' ID_NUM ']' ';' COND_J
	|	FOR '(' INIT1 EXP2 INIT3 ')' DEF_J
	|	WHILE COND1 DEF_J
	|	WHILE COND2 DEF_J
	|	IF COND1 DEF_J
	|	IF COND2 DEF_J
	|	RET
	|	INIT2 ';' COND_J
	|	INIT2 ';'
	|	CLASS_HIERARCHY '(' ID ')' ';' COND_J
	|	CLASS_HIERARCHY '(' '"' ID '"' ')' ';' COND_J
	|	CLASS_HIERARCHY '(' '"' ID '"' ')' ';'
	|	CLASS_HIERARCHY '(' ID ')' ';'
	| 	ID '(' ARG ')' ';' COND_J
	|	ID '(' ARG ')' ';'
	|	DTYPE ID '[' ']' error COND_J						{ strcpy( err,"Expected ';' after expression.");yyclearin; err_func(); yyerrok; } 
	| 	DTYPE error ';' COND_J	 						{ strcpy( err,"Identifier not defined."); yyclearin; err_func(); yyerrok; }
	|	DTYPE ID error COND_J							{ strcpy( err,"Expected ';' after expression."); yyclearin; err_func(); yyerrok; }
	|	error ';' COND_J 						        { strcpy( err, "Identifier missing, expected '+','=','-','*','/','<','>','++','--' numeral, literal" ); yyclearin; err_func(); yyerrok; }
	|	error DEF_J								{ strcpy( err,"Loop/Conditional error _/_ Missing Operator _* // Braces error."); yyclearin; err_func(); yyerrok; }
	;

DEF_C	:	'{' BODY_C '}'
	|	INIT2 ';'
	|	COND_C
	|
	;

DEF_J	:	'{' BODY_J '}'
	|	COND_J
	;

BODY_C	:	BODY_C BODY_C
	|	INIT2 ';'
	|	COND_C
	|
	;

BODY_J	:	BODY_J BODY_J
	|	COND_J
	|
	;

INIT1	:	ID '=' INIT1 ';' 
	|	INIT1 '+' INIT1 ';'
	|	INIT1 '-' INIT1 ';'
	|	INIT1 '*' INIT1 ';'
	|	INIT1 '/' INIT1 ';'
	|	INIT1 '<' INIT1 ';'
	|	INIT1 '>' INIT1 ';' 
	|	INIT1 LE INIT1 ';'
	|	INIT1 GE INIT1 ';'
	|	INIT1 EQ INIT1 ';'
	|	INIT1 NE INIT1 ';'
	|	INIT1 OR INIT1 ';'
	|	INIT1 AND INIT1 ';'
	|	ID_NUM
	;

INIT2	:	ID '=' INIT2
	|	INIT2 '+' INIT2 
	|	INIT2 '-' INIT2
	|	INIT2 '*' INIT2
	|	INIT2 '/' INIT2
	|	INIT2 '<' INIT2
	|	INIT2 '>' INIT2
	|	INIT2 LE INIT2
	|	INIT2 GE INIT2
	|	INIT2 EQ INIT2
	|	INIT2 NE INIT2
	|	INIT2 OR INIT2
	|	INIT2 AND INIT2
	|	INIT2 '+' '+'
	|	INIT2 '-' '-'
	|	ID_NUM
	| 	ID '(' ARG ')'
	;

INIT3	:	INIT2
	|
	;

EXP2	:	INIT2'<'INIT2 ';'
	|	INIT2'>'INIT2 ';'
	|	INIT2 LE INIT2 ';'
	|	INIT2 GE INIT2 ';'
	|	INIT2 EQ INIT2 ';'
	|	INIT2 NE INIT2 ';'
	|	INIT2 OR INIT2 ';'
	|	INIT2 AND INIT2 ';'
	;

COND1	:	'(' INIT2'<'INIT2 ')'
	|	'(' INIT2'>'INIT2 ')'
	|	'(' INIT2 LE INIT2 ')'
	|	'(' INIT2 GE INIT2 ')'
	|	'(' INIT2 EQ INIT2 ')'
	|	'(' INIT2 NE INIT2 ')'
	|	'(' INIT2 OR INIT2 ')'
	|	'(' INIT2 AND INIT2 ')'
	;

ID_NUM	:	ID
	|	NUM
	;

COND2	:	'(' ID_NUM ')'
	;

RET	:	RETURN INIT3 ';'
    	;
%%

#include <string.h>
#include <stdio.h>
#include "lex.yy.c"

char str[100];

void err_func() {
	printf( "\t\tExplicit Error \t: %s\n", err );
	memset( err, '\0', 100 );
}

void yyerror(char *s){
	printf( "File : %s\tLine : %d \t: %s before \" %s \"\n", str, yylineno, s, yytext);
	memset( err, '\0', 100 );
}

int main(int argc, char* argv[]) 
{
	int i;
	char* ext;
	
	strcpy( str, argv[1] );

	ext = strchr( str, '.' );
	i = (int)( ext - str );

	printf( "\n----+----+----+----+----+----+----\n" );
	if( str[i+1] == 'c' ) {
		printf( "\nRecognized file-type: C \n" );
		file_type = 0;
	} else if( str[i+1] == 'j' && str[i+2] == 'a' && str[i+3] == 'v' && str[i+4] == 'a' ){
		printf( "\nRecognized file-type: JAVA \n" );
		file_type = 1;		
	} else {
		printf("\n\".c\" or \".java\" type file not found cannot parse\n");
		return 0;
	}
	
	if( yyin = fopen( argv[1], "r" ) ) {
		;
	} else {
		printf( "File does not exist\n" );
		return 0;
	}
	printf( "\n----+----+----+----+----+----+----\n" );
	
	printf( "\nSyntax errors \n" );
	printf( "--------------\n" );

	yyparse();
	
	printf( "\nInput File\n" );
	printf( "--------------\n" );

	return 0;
}
