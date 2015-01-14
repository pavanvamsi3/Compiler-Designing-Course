%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void not_identified();
	void call_c_checker();
	void call_java_checker();
	char fileName[ 10 ];
%}

%token HASH INCLUDE DEFINE
%token CLASS PACKAGE IMPORT INTERFACE IMPLEMENTS EXTENDS
%token IDENTIFIER CONSTANT STRING_LITERAL
%token ABSTRACT FINAL PUBLIC PRIVATE PROTECTED STATIC TRANSIENT VOLATILE NATIVE SYNCHRONIZED
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOID BOOLEAN BYTE

%start begin
%%

begin
	: preprocessor_directive { call_c_checker(); } 
	| CompilationUnit { call_java_checker(); }
	| error '\n' { not_identified(); }
	;

preprocessor_directive
	: include_statements define_statements;

include_statements
	: HASH INCLUDE '<' IDENTIFIER '.' IDENTIFIER '>'
	| HASH INCLUDE '<' IDENTIFIER '>'
	| HASH INCLUDE '"' IDENTIFIER '.' IDENTIFIER '>'
	| HASH INCLUDE '"' IDENTIFIER '"'
	;

define_statements
	: HASH DEFINE define_value
	| /* You can choose to not define anything */
	;

define_value
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
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
	| IMPORT QualifiedName '.' '*' SemiColons
	;

QualifiedName
	: IDENTIFIER
	| QualifiedName '.' IDENTIFIER
	;

TypeDeclaration
	: ClassHeader '{'
	| ClassHeader '{' '}'
	;

ClassHeader
	: Modifiers ClassWord IDENTIFIER Extends Interfaces
	| Modifiers ClassWord IDENTIFIER Extends
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
	| INTERFACE
	;

Interfaces
	: IMPLEMENTS ClassNameList
	;

ClassNameList
        : QualifiedName
        | ClassNameList ',' QualifiedName
	;

Extends
	: EXTENDS TypeName
	| Extends ',' TypeName
	;

SemiColons
	: ';'
        | SemiColons ';'
        ;

TypeName
	: PrimitiveType
	| QualifiedName
	;

PrimitiveType
	: BOOLEAN
	| CHAR
	| BYTE
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| VOID
	;

%%

void not_identified()
{
	printf( "Error! Could not identify the file type.\n" );
	exit( 1 );
}

void call_c_checker()
{
	printf( "C file identified.\nCalling the C syntax checker.\n" );
	char command[ 100 ] = "c/c_checker < ";
	strcat( command, fileName );
	system( command );
	exit( 0 );
}

void call_java_checker()
{
	printf( "Java file identified.\nCalling the Java syntax checker.\n" );
	char command[ 100 ] = "java/java_checker < ";
	strcat( command, fileName );
	system( command );
	exit( 0 );
}

int yyerror(char *msg)
{
	(void)fprintf(stderr, "%s\n", msg);
	return(0);
}

int main( int argc, char *argv[] )
{
	strcpy( fileName, argv[ 1 ] );
	printf( "This is the C and Java program identifier." );
	yyparse();
	return 0;
}
