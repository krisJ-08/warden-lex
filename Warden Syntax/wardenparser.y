%{
    #define YYSTYPE char *
    #include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
    #include <stdbool.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();


    // for declarations
    void add_to_names(list_t *entry);
	list_t **names;
	int nc = 0;
	
	// for the initializations of arrays
	void add_to_vals(Value val);
	Value *vals;
	int vc = 0;

%}

%union {
    int ival;
    double fval;
    char *sval;
    bool bval;
    char cval;
    list_t* symtab_item;
    Value val;

}

%token EOL
%token  <symtab_item>  ID
%token  <ival>   ICONST
%token  <fval>   FCONST
%token  <cval>   CCONST
%token  <sval>   SCONST

%token  <val> CHAR INT SINGLE BOOL TSTRING
%token  <val> IF UNLESS RETURN SWITCH BREAK CONTINUE DEFAULT
%token  <val> DO WHILE FOR DOTIMES
%token  <val> VAR FUNCTION VOID MAIN DOT
%token  <val> TRUE FALSE
%token  <val> OUTPUT OUTPUTNL INPUT 


%nonassoc SEMIDEM 
%nonassoc LBRACK RBRACK LBRACEDEM RBRACEDEM LPAREN RPAREN NOTOP
%left GTHANOP LTHANOP GEQTHANOP LEQTHANOP EQUOP ANDOP OROP NOTEQUOP
%right ASSIGN ADDEQOP MINEQOP MULEQOP DIVEQOP MODEQOP COLON
%right IINCROP DINCROP REFERVAR
%left EXPOP ADDOP MINOP COMMA
%left MULOP DIVOP MODOP
%nonassoc ELSE


%start program



%%

program     : main_func program
            | translation_unit
            ;

translation_unit    : external_decl 									
				    | translation_unit external_decl					
				    ;
external_decl	    : func_def
				    | declaration
				    ;
            
declaration : VAR names data_types SEMIDEM
            | VAR ID data_types expression_assign SEMIDEM
            ;

const_variable  : const
                | variable

names   : ID
        | names COMMA
        ;

func_def    : FUNCTION ID LPAREN arguments RPAREN LBRACEDEM func_data_type expression RBRACEDEM
            | FUNCTION ID LPAREN arguments RPAREN LBRACEDEM func_data_type expression RETURN RBRACEDEM
            ;

func_data_type  : data_types
                | VOID
                ;

func_return : RETURN expression SEMIDEM
            | 
            ;

arguments   : ID COLON data_types 
            | arguments COMMA
            | 
            ;

variable    : ID
            | ar
            | const
            ;

init    : ASSIGN init_value 
        |
        ;

init_value  : const
            | array_init
            ;

array_init      : LBRACK values RBRACK
                ;

expr    : variable
        | expr COMMA variable
        | expr arith_op variable
        |
        ;

ar: ID LBRACK expr RBRACK ar
| ar COMMA
;

myarray : VAR ar data_types ASSIGN array_init
        ;

statements  : statements statement 
            | statement
            ;

statement   : if_statement
            | for_statement
            | while_statement
            | switch_statement
            | unless_statement
            | dotimes_statement
            | assignment_for
            | CONTINUE SEMIDEM
            | BREAK SEMIDEM
            | function_call SEMIDEM
            ;

if_statement    : IF LPAREN expression RPAREN tail else_if_part else_part
                | IF LPAREN expression RPAREN tail else_unl_part else_part
                ;

unless_statement    : UNLESS LPAREN expression RPAREN tail else_unl_part else_part
                    | UNLESS LPAREN expression RPAREN tail else_if_part else_part
                    ;

else_unl_part   : else_unl_part ELSE UNLESS LPAREN expression RPAREN tail
                | ELSE UNLESS LPAREN expression RPAREN tail
                | 
                ;            

else_if_part    : else_if_part ELSE IF LPAREN expression RPAREN tail
                | ELSE IF LPAREN expression RPAREN tail
                | 
                ;

else_part   : ELSE tail 
            | /* empty */  
            ;

for_statement   : FOR LPAREN assignment_for expression SEMIDEM expression RPAREN tail
                ;

assignment_for  : reference variable ASSIGN expression SEMIDEM 
                ;

reference   : VAR
            | 
            ;

dotimes_statement   : DOTIMES LPAREN const_variable const_variable LBRACEDEM expression RBRACEDEM
                    ;

while_statement : WHILE LPAREN expression RPAREN tail
                ;

boolean_expression  : variable rela_operator variable boolean_expression
                    | logic_operator
                    ;

switch_statement    : SWITCH LPAREN variable RPAREN LBRACEDEM switch_values RBRACEDEM
                    ;

switch_values   : 'case' const COLON statements jump_statement SEMIDEM
                | 'case' const COLON expression jump_statement SEMIDEM
                | switch_values DEFAULT expression
                ;

jump_statement  : CONTINUE SEMIDEM
                | BREAK SEMIDEM
                |
                ;

tail    : LBRACEDEM statements RBRACEDEM
        ;

expression_assign   : variable
                    | expression arith_op
                    | expression EXPOP
                    | 

unary_exp   : unary_operator expression
            | expression unary_operator
            ;

expression  : expression arith_op expression
            | expression EXPOP
            | unary_operator expression
            | expression unary_operator
            | expression logic_operator expression
            | NOTOP expression
            | expression ass_operator expression
            | expression rela_operator expression
            | LPAREN expression RPAREN
            | variable
            | sign const
            | function_call
            ;

assign_for  : 
            ;


function_call   : ID LPAREN call_params RPAREN;

call_params : call_param
            | TSTRING
            |
            ;

call_param  : call_param COMMA variable
            | variable
            ;

sign    : MINOP
        |
        ;


values      : values COMMA const
            | const
            ;

main_func   : FUNCTION MAIN LPAREN RPAREN LBRACEDEM data_types expression SEMIDEM RBRACEDEM | 

const       : ICONST
            | CCONST
            | FCONST
            | SCONST
            ;

data_types      : INT
                | SINGLE
                | CHAR
                | TSTRING
                ;

arith_op    : ADDOP
            | MINOP
            | MULOP
            | DIVOP
            | MODOP
            ;

ass_operator    : ASSIGN
                | MULEQOP
                | DIVEQOP
                | MODEQOP
                | ADDEQOP
                | MINEQOP
                ;

unary_operator  : IINCROP
                | DINCROP
                ;

logic_operator  : ANDOP
                | OROP
                ;

rela_operator   : EQUOP
                | NOTEQUOP
                | GTHANOP
                | LTHANOP
                | GEQTHANOP
                | LEQTHANOP
                ;

%%
int main*() {
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}