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

%type   <num>    exp
%token  <val>   CHAR INT SINGLE BOOL STRING
%token  <val> IF UNLESS RETURN SWITCH BREAK CONTINUE DEFAULT
%token  <val> DO WHILE FOR DOTIMES
%token  <val> VAR FUNCTION VOID MAIN
%token  <val> TRUE FALSE
%token  <val> OUTPUT OUTPUTNL INPUT

%token ADDOP MINOP MULOP DIVOP EXPOP MODOP
%token IINCROP DINCROP
%token OROP ANDOP NOTOP EQUOP
%token NOTEQUOP GTHANOP LTHANOP GEQTHANOP LEQTHANOP
%token MINEQOP ADDEQOP MULEQOP DIVEQOP MODEQOP

%token LPAREN RPAREN LBRACK RBRACK
%token LBRACEDEM RBRACEDEM SEMIDEM
%token COLON DOT COMMA ASSIGN REFERVAR

%nonassoc ELSE

%start program



%%

input:  exp EOL {printf("%d\n", $1); }
        | EOL;

exp: 
    ICONST { $$ = $1; }
    | exp PLUS exp { $$ = $1 + $3; }
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