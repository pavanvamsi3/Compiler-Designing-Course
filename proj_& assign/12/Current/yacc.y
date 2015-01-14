%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	void add_error(char *s);
	void yyerror(char *s);
	char errors[1000][1000];
	int ercnt = 0;
	int flag[100000];
	extern int yylineno;
	%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP REPEAT UNTIL TO ANY_STRING
%token ASSIGN_OP END START EXECUTE
%token TYPE_NAME CONST STATIC 

%token STRUCT UNION ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator unary_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
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
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
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
	;

assignment_operator
	: ASSIGN_OP
	;

expression
	: assignment_expression 
	| expression ',' assignment_expression 
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator ASSIGN_OP initializer
	;

type_specifier
	: struct_or_union_specifier
	;
struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
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
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' pointer
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
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
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| show_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: START END
	| START statement_list END 
	| START declaration_list END 
	| START declaration_list statement_list END 
	| '{' '}' 
	| '{' statement_list '}' 
	| '{' declaration_list '}' 
	| '{' declaration_list statement_list '}'
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
	;

expression_statement
	: ';'
	| expression ';'
	;
simple_string
	: ANY_STRING
	| statement
	| primary_expression
	;
simple_strings
	: simple_string
	| simple_strings simple_string
	;
show_statement
	: EXECUTE START simple_strings END
	;
selection_statement
	: IF expression statement
	| IF expression statement ELSE statement
	| SWITCH expression statement
	| IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
	;

iteration_statement
	: WHILE expression statement
	| WHILE '(' expression ')' statement
	| REPEAT statement UNTIL expression ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR assignment_expression TO primary_expression statement
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}

	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
	
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	| compound_statement
	| error {add_error("Error At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
	;

%%
#include <stdio.h>

extern char yytext[];
extern int column;
extern int linecount;

int main(){

	memset(flag, 0, sizeof flag);
	printf("1\t");
	yyparse();
	printf("ERRORs:\n");
	int i;
	
	for(i = 0; i < ercnt; i++){
		printf("%d %s", i+1, errors[i] );
	}
}
void yyerror(char *s){
//	fflush(stdout);
//	printf("\n%*s\n%*s\n", column, "^", column, s);
}
void add_error( char *s ) {
	if(flag[yylineno]){
		return;
	}
	flag[yylineno] = 1;
	strcpy( errors[ercnt], s );
	char *str = malloc(100000);	
	sprintf(str, "%d", yylineno);
	
	strcat (errors[ercnt] , " At Line ");
	strcat (errors[ercnt] , str);
	strcat (errors[ercnt] , "\n");
	ercnt++;
}
