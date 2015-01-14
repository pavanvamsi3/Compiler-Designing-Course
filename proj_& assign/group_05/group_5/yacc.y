%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME CLASS

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN NEW
%token PRIVATE PUBLIC IMPORT 

%start translation_unit

%{
	#include <string.h>
	#include <stdlib.h>
	char errors[1000][1000];
	char funs[1000][1000];
	char id[10000];
	int cfuns = 0;
	char ufuns[1000][1000];
	int cufuns = 0;
	int ercnt = 0;
	void add_error(char *s);
%}

%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| round_open expression round_close
	;

postfix_expression
	: primary_expression
	| postfix_expression square_open expression square_close
	| postfix_expression round_open round_close 
	| postfix_expression round_open argument_expression_list round_close
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
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF round_open type_name round_close
	;

unary_operator
	: { add_error("Operator missing");}
	| '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| round_open type_name round_close cast_expression
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
	: { add_error("= missing");}
	| '='
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
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers semi_colon
	| declaration_specifiers init_declarator_list semi_colon
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
	| init_declarator_list ',' init_declarator
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
	: struct_or_union IDENTIFIER curly_open struct_declaration_list curly_close
	| struct_or_union curly_open struct_declaration_list curly_close
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
	: specifier_qualifier_list struct_declarator_list semi_colon
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
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM curly_open enumerator_list curly_close
	| ENUM IDENTIFIER curly_open enumerator_list curly_close
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
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
	| PUBLIC
	| PRIVATE
	| IMPORT
	| USING
	;

direct_declarator
	: IDENTIFIER
	| round_open declarator round_close
	| direct_declarator square_open constant_expression square_close
	| direct_declarator square_open square_close
	| direct_declarator round_open parameter_type_list round_close
	| direct_declarator round_open identifier_list round_close
	| direct_declarator round_open round_close
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
	: round_open abstract_declarator round_close
	| square_open square_close
	| square_open constant_expression square_close
	| direct_abstract_declarator square_open square_close
	| direct_abstract_declarator square_open constant_expression square_close
	| round_open round_close
	| round_open parameter_type_list round_close
	| direct_abstract_declarator round_open round_close
	| direct_abstract_declarator round_open parameter_type_list round_close
	;

initializer
	: assignment_expression
	| curly_open initializer_list curly_close
	| curly_open initializer_list ',' curly_close
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
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: curly_open curly_close
	| curly_open statement_list curly_close
	| curly_open declaration_list curly_close
	| curly_open declaration_list statement_list curly_close
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
	: semi_colon
	| expression semi_colon
	;

selection_statement
	: IF round_open expression round_close statement
	| IF round_open expression round_close statement ELSE statement
	| SWITCH round_open expression round_close statement
	;

iteration_statement
	: WHILE round_open expression round_close statement
	| DO statement WHILE round_open expression round_close semi_colon
	| FOR round_open expression_statement expression_statement round_close statement
	| FOR round_open expression_statement expression_statement expression round_close statement
	;

jump_statement
	: GOTO IDENTIFIER semi_colon
	| CONTINUE semi_colon
	| BREAK semi_colon
	| RETURN semi_colon
	| RETURN expression semi_colon
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	:
	| CLASS_START
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

curly_open	: { add_error("{ missing");}
		| '{'
		;

curly_close	: { add_error("} missing");}
		| '}'
		;

round_open	: { add_error("( missing");}
		| '('
		;

round_close	: { add_error(") missing");}
		| ')'
		;

square_open	: { add_error("[ missing");}
		| '['
		;

square_close	: { add_error("] missing");}
		| ']'
		;
semi_colon	: { add_error("; missing");}
		| ';'
		;


CLASS_START     : CLASS IDENTIFIER curly_open CLASS_DEFINITION curly_close
                ;

CLASS_DEFINITION        : expression_statement
                        | function_definition
                        | function_definition function_definition
					                        ;

%%
#include <stdio.h>

extern char yytext[];
extern int column;
extern int line;
int main(){
	yyparse();

	printf("ERRORs:\n");

	int i;
	for(i = 0; i < ercnt; i++){
		printf("%d %s", i+1, errors[i] );
	}
}

void add_error( char *s ) {
	strcpy( errors[ercnt], s );
	char *str = malloc(100000);	
	sprintf(str, "%d", line);
	
	strcat (errors[ercnt] , " At Line ");
	strcat (errors[ercnt] , str);
	strcat (errors[ercnt] , "\n");
	ercnt++;
}
void yyerror(char *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

