%{

#include <stdio.h>
void yyerror( char * );
 extern int yylineno;
extern int count;


/*------------------------------------------------------------------
 * yacc-able Java 1 grammar
 * see notes at end
 */
%}

%token ABSTRACT
%token BOOLEAN BREAK BYTE BYVALUE
%token CASE CAST CATCH CHAR CLASS CONST CONTINUE
%token DEFAULT DO DOUBLE
%token ELSE EXTENDS
%token FINAL FINALLY FLOAT FOR FUTURE
%token GENERIC GOTO
%token IF IMPLEMENTS IMPORT INNER INSTANCEOF INT INTERFACE
%token LONG
%token NATIVE NEW JNULL
%token OPERATOR OUTER
%token PACKAGE PRIVATE PROTECTED PUBLIC
%token REST RETURN
%token SHORT STATIC SUPER SWITCH SYNCHRONIZED
%token THIS THROW THROWS TRANSIENT TRY
%token VAR VOID VOLATILE
%token WHILE
%token OP_INC OP_DEC
%token OP_SHL OP_SHR OP_SHRR
%token OP_GE OP_LE OP_EQ OP_NE
%token OP_LAND OP_LOR
%token OP_DIM
%token ASS_MUL ASS_DIV ASS_MOD ASS_ADD ASS_SUB
%token ASS_SHL ASS_SHR ASS_SHRR ASS_AND ASS_XOR ASS_OR
%token IDENTIFIER LITERAL BOOLLIT

%start CompilationUnit

%%

TypeSpecifier
	: TypeName
	| TypeName Dims
	;

TypeName
	: PrimitiveType
	| QualifiedName
	;

ClassNameList
        : QualifiedName
        | ClassNameList ',' QualifiedName

	;

PrimitiveType
	: BOOLEAN
	| CHAR
	| BYTE
	| SHORT
	|INT 
	| LONG
	| FLOAT
	| DOUBLE
	| VOID
	;

SemiColons
	: ';'
	| error { printf("Semicolon missing in line number : %d \n\n", count-2); } 
        | SemiColons ';'
        ;

CompilationUnit
	: ProgramFile
        ;

ProgramFile
	: PackageStatement ImportStatements TypeDeclarations
	| PackageStatement ImportStatements
	| PackageStatement                  TypeDeclarations
	|                  ImportStatements TypeDeclarations
	| PackageStatement
	|                  ImportStatements
	|                                   TypeDeclarations
	;

PackageStatement
	: PACKAGE QualifiedName SemiColons
|PACKAGE error { printf("Package name missing :  %d \n\n " , count ); }  SemiColons

	;

TypeDeclarations
	: TypeDeclarationOptSemi
	| TypeDeclarations TypeDeclarationOptSemi
	;

TypeDeclarationOptSemi
        : TypeDeclaration
        | TypeDeclaration SemiColons
        ;

ImportStatements
	: ImportStatement
	| ImportStatements ImportStatement
	;

ImportStatement
	: IMPORT QualifiedName SemiColons
|IMPORT error{printf("Wrong import :  %d\n\n",count);} SemiColons

	| IMPORT QualifiedName '.' '*' SemiColons
	| IMPORT QualifiedName '.' error{printf("Incomplete import statement :  %d\n\n",count);} SemiColons
	;

QualifiedName
	: IDENTIFIER
	| QualifiedName '.' IDENTIFIER
	| QualifiedName error { printf(" expected . : %d \n\n", count);} IDENTIFIER
	| QualifiedName '.' error { printf("Incomplete package/import name : %d\n\n", count);}
	;

TypeDeclaration
	: ClassHeader '{' FieldDeclarations '}'
	| ClassHeader '{' '}'
 
	| ClassHeader error {printf("Curly  braces of class is missing :  %d\n\n",count);} FieldDeclarations '}'
	;

ClassHeader
	: Modifiers ClassWord IDENTIFIER Extends Interfaces
	| Modifiers ClassWord IDENTIFIER Extends
	|Modifiers ClassWord error{ printf("class name missing : %d \n\n", count); } Extends

	| Modifiers ClassWord IDENTIFIER       Interfaces
	|           ClassWord IDENTIFIER Extends Interfaces
	| Modifiers ClassWord IDENTIFIER
	|           ClassWord IDENTIFIER Extends
	|           ClassWord IDENTIFIER       Interfaces
	|           ClassWord IDENTIFIER


	;

Modifiers
	: Modifier
	| Modifiers Modifier
	;

Modifier
	: ABSTRACT
	| FINAL
	| PUBLIC
	| PROTECTED
	| PRIVATE
	| STATIC
	| TRANSIENT
	| VOLATILE
	| NATIVE
	| SYNCHRONIZED
	;

ClassWord
	: CLASS
|error {printf("Class keyword missing : %d\n\n",count);} 
	| INTERFACE
	;

Interfaces
	: IMPLEMENTS ClassNameList
	;

FieldDeclarations
	: FieldDeclarationOptSemi
        | FieldDeclarations FieldDeclarationOptSemi
	;

FieldDeclarationOptSemi
        : FieldDeclaration
        | FieldDeclaration SemiColons
        ;

FieldDeclaration
	: FieldVariableDeclaration ';'
| FieldVariableDeclaration error {printf("Missing Semicolon : %d\n\n",count);}
	| MethodDeclaration
	| ConstructorDeclaration
	| StaticInitializer
        | NonStaticInitializer
        | TypeDeclaration
	;

FieldVariableDeclaration
	: Modifiers TypeSpecifier VariableDeclarators

	|  Modifiers TypeSpecifier error {printf("Wrong declaration : %d \n\n",count);}
	|   Modifiers error {printf("Wrong declaration : %d \n\n",count);} VariableDeclarators
	|           TypeSpecifier VariableDeclarators
	|TypeSpecifier error {printf("Wrong declaration : %d \n\n",count);}
        |  error {printf("Wrong declaration : %d \n\n",count);} VariableDeclarators

	;

VariableDeclarators
	: VariableDeclarator
	| VariableDeclarators ',' VariableDeclarator

	| VariableDeclarators ',' error {printf("Variable name is expected : %d \n\n",count);}
	;

VariableDeclarator
	: DeclaratorName
	| DeclaratorName '=' VariableInitializer
	| DeclaratorName '=' error{printf("Wrong initialisation : %d\n\n",count);}

	;

VariableInitializer
	: Expression
	| '{' '}'
        | '{' ArrayInitializers '}'
| '{' ArrayInitializers error{printf("Missing end expression after initializer  : %d\n\n",count);}

        ;

ArrayInitializers
	: VariableInitializer
	| ArrayInitializers ',' VariableInitializer
	| ArrayInitializers ','
	;

MethodDeclaration
	: Modifiers TypeSpecifier MethodDeclarator Throws MethodBody
	| Modifiers TypeSpecifier MethodDeclarator        MethodBody
	|           TypeSpecifier MethodDeclarator Throws MethodBody
	|           TypeSpecifier MethodDeclarator        MethodBody



	;

MethodDeclarator
	: DeclaratorName '(' ParameterList ')'
	| DeclaratorName error {printf("Expected opening braces of method : %d\n\n",count);}  ')'
	| DeclaratorName error {printf("Expected opening braces of method : %d\n\n",count);}  ParameterList  ')'
	|
 DeclaratorName '('   error {printf("Expected closing braces of method : %d\n\n",count);} 
 DeclaratorName '('   ParameterList error {printf("Expected closing braces of method : %d\n\n",count);} 
	| DeclaratorName '(' ')'
	| MethodDeclarator OP_DIM
	;

ParameterList
	: Parameter
	| ParameterList ',' Parameter
	| ParameterList ',' error{printf("Expected Parameter : %d\n\n",count);}
	;

Parameter
	: TypeSpecifier DeclaratorName
        | FINAL TypeSpecifier DeclaratorName
	;

DeclaratorName
	: IDENTIFIER
        | DeclaratorName OP_DIM
        ;

Throws
	: THROWS ClassNameList
	|THROWS error { printf(" Expected exception : %d \n\n" , count );}

	;

MethodBody
	: Block
	| ';'
	;

ConstructorDeclaration
	: Modifiers ConstructorDeclarator Throws Block
	| Modifiers ConstructorDeclarator        Block
	|           ConstructorDeclarator Throws Block
	|           ConstructorDeclarator        Block
	;

ConstructorDeclarator
	: IDENTIFIER '(' ParameterList ')'
	| IDENTIFIER '(' ')'
	| IDENTIFIER error { printf("Expected '(' : %d \n\n ", count );}  ParameterList ')'
	|IDENTIFIER '(' ParameterList error{ printf("Expected ')' : %d \n\n", count ); }
| IDENTIFIER error { printf("Expected '(' : %d \n\n ", count );}   ')'
        |IDENTIFIER '('  error{ printf("Expected ')' : %d \n\n", count ); }



	;

StaticInitializer
	: STATIC Block
	;

NonStaticInitializer
        : Block
        ;

Extends

	: EXTENDS TypeName
| EXTENDS error {printf("Missing parent class :  %d \n\n",count);}
	| Extends ',' TypeName
| Extends ',' error {printf("missing class  : %d \n\n",count);}

	;

Block
	: '{' LocalVariableDeclarationsAndStatements '}'
	| error{printf("Expected { : %d\n\n",count);} LocalVariableDeclarationsAndStatements '}'
	|'{' LocalVariableDeclarationsAndStatements  error{printf("Expected } : %d\n\n",count);} 
	|'{' error{printf("Expected } : %d\n\n",count);} 
	|error{printf("Expected { : %d\n\n",count);} '}' 
	| '{' '}'
        ;

LocalVariableDeclarationsAndStatements
	: LocalVariableDeclarationOrStatement
	| LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement
	;

LocalVariableDeclarationOrStatement

	: LocalVariableDeclarationStatement
	| Statement
	;

LocalVariableDeclarationStatement
	: TypeSpecifier VariableDeclarators ';'
	|  TypeSpecifier error { printf(" variable name missing : %d \n\n " ,count); } ';'

        | FINAL TypeSpecifier VariableDeclarators ';'
	| TypeSpecifier VariableDeclarators error {printf("Expected semicolon : %d\n\n",count);}
        | FINAL TypeSpecifier VariableDeclarators error {printf("Expected semicolon : %d\n\n",count);}

	;

Statement
	: EmptyStatement
	| LabelStatement
	| ExpressionStatement ';'
        | SelectionStatement
        | IterationStatement
	| JumpStatement
	| GuardingStatement
	| Block
	;

EmptyStatement
	: ';'
        ;

LabelStatement
	: IDENTIFIER ':'
        | CASE ConstantExpression ':'
	| DEFAULT ':'
        ;

ExpressionStatement
	: Expression
	;

SelectionStatement
	: IF '(' Expression ')' Statement
	| IF error{  printf(" if bracket missing \n\n"); }  Expression ')' Statement
	| IF '(' Expression error{  printf(" if bracket missing \n\n"); }  Statement
        | IF '(' Expression ')' Statement ELSE Statement
        | SWITCH '(' Expression ')' Block
        ;

IterationStatement
	: WHILE '(' Expression ')' Statement
	| WHILE '(' Expression error{ printf("Expected ) at the end of expression in line %d\n\n",count); } Statement
	| WHILE error{ printf("Expected ( at the end of expression in line %d\n\n",count); } Expression ')' Statement
	
	| DO Statement WHILE '(' Expression ')' ';'
	| FOR '(' ForInit ForExpr ForIncr ')' Statement
	| FOR '(' ForInit ForExpr         ')' Statement
|FOR error { printf(" for single open missing \n\n"); } ForInit ForExpr ForIncr ')'  Statement
|FOR '(' ForInit ForExpr ForIncr error { printf(" for  single closing missing\n\n");  }  Statement
	;

ForInit
	: ExpressionStatements ';'
	|ExpressionStatements error { printf(" for termination  missing in line %d \n\n", count); }

	| LocalVariableDeclarationStatement
	| ';'
	;

ForExpr
	: Expression ';'
	| Expression error {printf("Expected Semicolon %d \n\n",count);} 
	| ';'
	;

ForIncr
	: ExpressionStatements
	;

ExpressionStatements
	: ExpressionStatement
	| ExpressionStatements ',' ExpressionStatement
	;
JumpStatement
        : BREAK IDENTIFIER ';'

            |BREAK IDENTIFIER error{printf("Missing semicolon :%d\n\n",count);}
        | BREAK            ';'
        | BREAK error{printf("Missing semicolon :%d\n\n",count);}
        | CONTINUE IDENTIFIER ';'
        | CONTINUE IDENTIFIER{printf("Missing semicolon :%d\n\n", count);}
        | CONTINUE            ';'
        | CONTINUE error {printf("Missing semicolon :%d\n\n", count);}
        | RETURN Expression ';'
        | RETURN Expression error{printf("Missing semicolon :%d\n\n", count);}
        | RETURN            ';'
        | RETURN error{printf("Missing semicolon :%d\n\n", count);}
        | THROW Expression ';'
        | THROW Expression error{printf("Missing semicolon :%d\n\n", count);}
        ;


GuardingStatement
	: SYNCHRONIZED '(' Expression ')' Statement
	| TRY Block Finally
	| TRY Block Catches
	| TRY Block Catches Finally
	| TRY Block error{printf("Try without catch:%d\n\n ",count);}

	;

Catches
	: Catch
	| Catches Catch
	;

Catch
	: CatchHeader Block
	;

CatchHeader
	: CATCH '(' TypeSpecifier IDENTIFIER ')'
	| CATCH '(' TypeSpecifier IDENTIFIER error{printf("Expected )  : %d \n\n",count);}
	| CATCH error{printf("Expected (  : %d \n\n",count);} TypeSpecifier IDENTIFIER ')'
	| CATCH '(' TypeSpecifier ')'
	;

Finally
	: FINALLY Block
	;

PrimaryExpression
	: QualifiedName
	| NotJustName
	;

NotJustName
	: SpecialName
	| NewAllocationExpression
	| ComplexPrimary
	;

ComplexPrimary
	: '(' Expression ')'
	| ComplexPrimaryNoParenthesis
	;

ComplexPrimaryNoParenthesis
	: LITERAL
	| BOOLLIT
	| ArrayAccess
	| FieldAccess
	| MethodCall
	;

ArrayAccess
	: QualifiedName '[' Expression ']'
	| ComplexPrimary '[' Expression ']'
	;

FieldAccess
	: NotJustName '.' IDENTIFIER
	| RealPostfixExpression '.' IDENTIFIER
        | QualifiedName '.' THIS
        | QualifiedName '.' CLASS
        | PrimitiveType '.' CLASS
	;

MethodCall
	: MethodAccess '(' ArgumentList ')'
	| MethodAccess '(' ')'
|MethodAccess error { printf("expected '(' :  %d \n\n", count); } ArgumentList ')'
|MethodAccess '(' ArgumentList error { printf("expected ')' :  %d \n\n", count); }
|MethodAccess error { printf("expected '(' :  %d \n\n", count); }  ')'
|MethodAccess '(' error { printf("expected ')' :  %d \n\n", count); }
	;



MethodAccess
	: ComplexPrimaryNoParenthesis
	| SpecialName
	| QualifiedName
	;

SpecialName
	: THIS
	| SUPER
	| JNULL
	;

ArgumentList
	: Expression
	| ArgumentList ',' Expression
	| ArgumentList error{ printf("expected ',' : %d \n\n ", count );}  Expression

	;

NewAllocationExpression
        : PlainNewAllocationExpression
        | QualifiedName '.' PlainNewAllocationExpression
        ;

PlainNewAllocationExpression
    	: ArrayAllocationExpression
    	| ClassAllocationExpression
    	| ArrayAllocationExpression '{' '}'
    	| ClassAllocationExpression '{' '}'
    	| ArrayAllocationExpression '{' ArrayInitializers '}'
    	| ClassAllocationExpression '{' FieldDeclarations '}'
    	;

ClassAllocationExpression
	: NEW TypeName '(' ArgumentList ')'
	| NEW TypeName '('              ')'
        ;

ArrayAllocationExpression
	: NEW TypeName DimExprs Dims
	| NEW TypeName DimExprs
        | NEW TypeName Dims
	;

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
	: '[' Expression ']'
	;

Dims
	: OP_DIM
	| Dims OP_DIM
	;

PostfixExpression
	: PrimaryExpression
	| RealPostfixExpression
	;

RealPostfixExpression
	: PostfixExpression OP_INC
	| PostfixExpression OP_DEC
	;

UnaryExpression
	: OP_INC UnaryExpression
	| OP_DEC UnaryExpression
	| ArithmeticUnaryOperator CastExpression
	| LogicalUnaryExpression
	;

LogicalUnaryExpression
	: PostfixExpression
	| LogicalUnaryOperator UnaryExpression
	;

LogicalUnaryOperator
	: '~'
	| '!'
	;

ArithmeticUnaryOperator
	: '+'
	| '-'
	;

CastExpression
	: UnaryExpression
	| '(' PrimitiveTypeExpression ')' CastExpression
	| '(' ClassTypeExpression ')' CastExpression
	| '(' Expression ')' LogicalUnaryExpression
	;

PrimitiveTypeExpression
	: PrimitiveType
        | PrimitiveType Dims
        ;

ClassTypeExpression
	: QualifiedName Dims
        ;

MultiplicativeExpression
	: CastExpression
	| MultiplicativeExpression '*' CastExpression
	| MultiplicativeExpression '/' CastExpression
	| MultiplicativeExpression '%' CastExpression
	| MultiplicativeExpression '*' error {printf("Incomplete Expression : %d\n\n",count);}
	| MultiplicativeExpression '/' error {printf("Incomplete Expression : %d\n\n",count);}

	| MultiplicativeExpression '%' error {printf("Incomplete Expression : %d\n\n",count);}

	;

AdditiveExpression
	: MultiplicativeExpression
        | AdditiveExpression '+' error {printf("Incomplete Expression : %d\n\n",count);}

	| AdditiveExpression '-' MultiplicativeExpression
        | AdditiveExpression '' error {printf("Incomplete Expression : %d\n\n",count);}
	| AdditiveExpression '+' MultiplicativeExpression

        ;

ShiftExpression
	: AdditiveExpression
        | ShiftExpression OP_SHL AdditiveExpression
        | ShiftExpression OP_SHR AdditiveExpression
        | ShiftExpression OP_SHRR AdditiveExpression
        | ShiftExpression OP_SHL error {printf("Incomplete expression : %d \n\n",count);}
        | ShiftExpression OP_SHR error {printf("Incomplete expression : %d \n\n",count);}

        | ShiftExpression OP_SHRR error {printf("Incomplete expression : %d \n\n",count);}

	;

RelationalExpression
	: ShiftExpression
        | RelationalExpression '<' ShiftExpression
	| RelationalExpression '>' ShiftExpression
        | RelationalExpression '<' error {printf("Incomplete expression : %d \n\n",count);}

	| RelationalExpression '>' error {printf("Incomplete expression : %d \n\n",count);}

	| RelationalExpression OP_LE ShiftExpression
	| RelationalExpression OP_GE ShiftExpression
	| RelationalExpression OP_LE error {printf("Incomplete expression : %d \n\n",count);}

	| RelationalExpression OP_GE error {printf("Incomplete expression : %d \n\n",count);}

	| RelationalExpression INSTANCEOF TypeSpecifier
	;

EqualityExpression
	: RelationalExpression
        | EqualityExpression OP_EQ RelationalExpression
        | EqualityExpression OP_NE RelationalExpression
        | EqualityExpression OP_EQ error {printf("Incomplete expression : %d \n\n",count);}

        | EqualityExpression OP_NE error {printf("Incomplete expression : %d \n\n",count);}

        ;

AndExpression
	: EqualityExpression
        | AndExpression '&' EqualityExpression
        ;

ExclusiveOrExpression
	: AndExpression
	| ExclusiveOrExpression '^' AndExpression
	;

InclusiveOrExpression
	: ExclusiveOrExpression
	| InclusiveOrExpression '|' ExclusiveOrExpression
	;

ConditionalAndExpression
	: InclusiveOrExpression
	| ConditionalAndExpression OP_LAND InclusiveOrExpression
	;

ConditionalOrExpression
	: ConditionalAndExpression
	| ConditionalOrExpression OP_LOR ConditionalAndExpression
	;

ConditionalExpression
	: ConditionalOrExpression
	| ConditionalOrExpression '?' Expression ':' ConditionalExpression
	| ConditionalOrExpression '?' error {printf("Missing expression :  %d \n\n",count);} ':' ConditionalExpression
	;

AssignmentExpression
	: ConditionalExpression
	| UnaryExpression AssignmentOperator AssignmentExpression
	;

AssignmentOperator
	: '='
	| ASS_MUL
	| ASS_DIV
	| ASS_MOD
	| ASS_ADD
	| ASS_SUB
	| ASS_SHL
	| ASS_SHR
	| ASS_SHRR
	| ASS_AND
	| ASS_XOR
	| ASS_OR
	;

Expression
	: AssignmentExpression
        ;

ConstantExpression
	: ConditionalExpression
	;

%%

#include <stdio.h>

extern char yytext[];
//extern int column;

int main(){
        yyparse();
        return 0;
}

void yyerror(char *s) {
        fflush(stdout);
  //      printf("\n%*s\n%*s\n", column, "-------------", column, s);
}

