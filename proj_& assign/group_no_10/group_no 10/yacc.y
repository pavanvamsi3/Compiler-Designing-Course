%{
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int lineno;
void       yyerror(  char *msg );
int   yylex();
extern int column; 
int total=0;
//S         : ST {printf("Input accepted\n"); exit(0);}
#include"lex.yy.c"
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF STRINGFOR
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP L_OP G_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token DEFINE SCANF INT_SPEC
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

 

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	| '(' expression error 								{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	|postfix_expression '[' expression error					 {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| postfix_expression '(' ')'
	|postfix_expression '(' error 							{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| postfix_expression '(' argument_expression_list ')'
	|postfix_expression '(' argument_expression_list error 				{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| postfix_expression '*' primary_expression ';' 
        
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression 
	| argument_expression_list error 					{printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	|SIZEOF '(' type_name error 							{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	|'%'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	|'(' type_name error {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; } cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression 
	| unary_expression assignment_operator error 		{printf("line no %d column no %d expected Identifier or value \n",lineno ,column);yyerrok;}
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression      
	| expression  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}

	;

constant_expression
	: conditional_expression
	;


declaration
	: declaration_specifiers ';'
	|declaration_specifiers error  						{ printf("line no %d column no %d expected ';' or ',' \n",lineno,column);yyerrok;}
	|declaration_specifiers init_declarator_list ';' 
	|declaration_specifiers init_declarator_list error          				{ printf("line no %d cloumn no %d expected ';'  \n",lineno-1,column);yyerrok; }
	|SCANF '('STRING_LITERAL ',' '&' IDENTIFIER')' ';'
	|SCANF '('STRING_LITERAL ',' '&' IDENTIFIER')' error 			{printf("line no %d column no %d expected ',' or ';' \n" , lineno-1,column);yyerrok;}		
	|SCANF '('STRING_LITERAL ','error{printf("line number %d column number %d\n",lineno,column);yyerrok;}IDENTIFIER')'';'	
;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ','  init_declarator 
	|init_declarator_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}

	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT 				
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'';'
	|struct_or_union IDENTIFIER error {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;} struct_declaration_list '}'
	|struct_or_union IDENTIFIER '{' struct_declaration_list error {printf("line no %d column no %d expected '}' or ';'\n" , lineno,column); yyerrok;}
	| struct_or_union '{' struct_declaration_list '}'';'
	|struct_or_union '{' struct_declaration_list error            {printf("line no %d column no %d expected '}' or ';' \n" , lineno,column); yyerrok;}
	|struct_or_union error {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	|specifier_qualifier_list struct_declarator_list error{ printf("line no %d column no %d expected ';' \n",lineno,column);yyerrok;}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	| struct_declarator_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
	;
	

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	|ENUM '{'enumerator_list  error 			{printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
	|ENUM error {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;} enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	|ENUM IDENTIFIER '{'enumerator_list error {printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
	|ENUM IDENTIFIER error {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator 
	| enumerator_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	|'(' declarator error 							{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok;}
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' constant_expression error 			{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| direct_declarator '[' ']'
	| direct_declarator '[' error 						{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')' 			
	| direct_declarator '(' identifier_list error 				{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| direct_declarator '(' ')'
	| direct_declarator '(' error 						{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	|parameter_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	| parameter_list parameter_declaration  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	| identifier_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '(' abstract_declarator error 				{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| '[' ']'
	| '[' error 							{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| '[' constant_expression ']'
	| '[' constant_expression error 				{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' error 				{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| direct_abstract_declarator '[' constant_expression ']'
	| direct_abstract_declarator '[' constant_expression error 	{printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
	| '(' ')'
	| '(' parameter_type_list ')'
	| '(' parameter_type_list error 					{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| direct_abstract_declarator '(' ')'
	|direct_abstract_declarator '(' error 					{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	| direct_abstract_declarator '(' parameter_type_list ')'
	|direct_abstract_declarator '(' parameter_type_list error 		{printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list error 						{printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
	| error {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;} initializer_list '}'
	| '{' initializer_list ',' '}'
	| '{' initializer_list ',' error 					{printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
	|initializer_list ',' '}' error {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;} 
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	|initializer_list  error                                        {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
	;

statement
	: SCANF
	| labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	|'{' 								{printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}
	|error                                                          {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;} '}'
	| '{' statement_list '}'
	| '{' statement_list error					{printf("line no %d column no %d expected '}' not closed  \n" , lineno,column); yyerrok;}
	|error 		 						{printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}	statement_list '}'
	| '{' declaration_list '}'
	|'{'  declaration_list error 					{printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}	
	|error                                                          {printf("line no %d column no %d expected '{' hehehe not closed \n" , lineno,column); yyerrok;}declaration_list '}'
	
	| '{' declaration_list statement_list '}'
	| '{' declaration_list statement_list  error 			{printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	|expression error 									{ printf("line no %d column no %d expected ';' \n" , lineno-1,column);	yyerrok;}
	| error 							{ printf("line no %d column no %d operator not understood or not correct \n" , lineno,column); yyerrok;}
	;

selection_statement
	: IF '(' expression ')' statement
	| IF error {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}expression ')'statement
	| IF '(' expression error 					{printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}statement
	| IF '(' expression ')' statement ELSE statement
	|IF '(' expression error                                       {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
	| SWITCH '(' expression ')' statement
	| SWITCH '(' expression error 					{printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}statement
	|SWITCH	 error {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}expression ')'statement
	| statement ELSE error {printf("line no %d column no %d else without if statement \n",lineno-1 , column);yyerrok;} statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| WHILE  error 										{ printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
	|WHILE'(' expression  error 								{ printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
	| DO statement WHILE '(' expression ')' ';'
	|DO statement WHILE '(' expression  error 						{ printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' type_specifier expression_statement expression_statement expression ')' statement error {printf("line no %d column no %d not supported  \n" , lineno,column); yyerrok;}
	|FOR '(' expression_statement expression_statement expression error 			{ printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
	| FOR error										 { printf("line no %d column no %d expected '(' \n" , lineno,column); yyerrok;} expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	|BREAK  error  					                         {printf("line no %d column no %d expected ';' after break statement\n",lineno-1,column); yyerrok;}
	| RETURN ';'
	|RETURN error 								{printf("line no %d column no %d expected ';' \n",lineno-1 ,column);yyerrok;}
	| RETURN expression ';'
	| RETURN expression error 						{printf("line no %d column no %d expected ';' \n",lineno-1 ,column);yyerrok;}	
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	|DEFINE translation_unit
	| SCANF ';'	
	;

external_declaration
	: function_definition
	| declaration
	| 
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	
	;

%%
/*
#if YYDEBUG
extern int yydebug;
#endif
*/
int main(int argc ,char* argv[]){
/*#if YYDEBUG
  if (argc > 1) yydebug = 1;
  else yydebug = 0;
#endif*/
if(argc< 2){
	printf("please give file name to check the error \n");
	printf("Usage is ./a.out temp.c \n");
	return 0;
	}
FILE *myfile = fopen(argv[1], "r");
        // make sure it's valid:
      if (!myfile) {
                printf( "I can't open file!\n"); //<< endl;
                return -1;
        }
        // set lex to read from it instead of defaulting to STDIN:
        yyin = myfile;

        // parse through the input until there is no more:
        
        do {
                yyparse();
        } while (!feof(yyin));


//	yyparse();
printf("\nTotal no of errors identified : %d \n" , total);
}
void yyerror(char *s){
	printf("Error ! ");
	total++;
	
}
//  |error                                                          {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}declaration_list '}'

