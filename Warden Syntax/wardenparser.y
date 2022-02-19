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
%token  <idval>  ID
%token  <ival>   ICONST
%token  <fval>   FCONST
%token  <cval>   CCONST
%token  <sval>   STRING

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
%left EXPOP PLUS MINOP COMMA
%left MULOP DIVOP MODOP
%nonassoc ELSE


%start program



%%

program: 

data-types:     INT
                | SINGLE
                | CHAR
                | TSTRING
                | BOOL
                ;
ass-operator:   EQUOP
                | MULEQOP
                | DIVEQOP
                | MODEQOP
                | ADDEQOP
                | MINEQOP
                ;

inc-operator:   IINCROP
                | DINCROP
                | NOTOP
                ;

logic-operator: ANDOP
                | OROP
                ;

rela-operator:  EQUOP
                | NOTEQUOP
                | GTHANOP
                | LTHANOP
                | GEQTHANOP
                | LEQTHANOP
                ;

%%
int main*() {
    yyprse();

    return 0;
}

yyerror(char* s){
    printf("ERROR: %s\n", s);
    return 0;
}