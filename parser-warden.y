%{
	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
        #include <process.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int yylineno;
	extern int yylex();
        char str[5];
        char src[20];
        #define YYERROR_VERBOSE 1
        void yyerror(const char *s);

        
%}

/* YYSTYPE union */
%union{
        char char_val;
	int int_val;
	double double_val;
	char* str_val;
	list_t* symtab_item;
}

%token <symtab_item>   ID
%token <int_val>       ICONST
%token <double_val>    FCONST
%token <char_val>      CCONST
%token <str_val>       SCONST

%token  CHAR INT SINGLE BOOL TSTRING VOID
%token  IF UNLESS RETURN SWITCH BREAK CONTINUE DEFAULT CASE
%token  DO WHILE FOR DOTIMES
%token  VAR FUNCTION MAIN DOT
%token  TRUE FALSE
%token  OUTPUT OUTPUTNL INPUT 


%nonassoc LBRACK RBRACK LBRACEDEM RBRACEDEM LPAREN RPAREN NOTOP
%token GTHANOP LTHANOP GEQTHANOP LEQTHANOP EQUOP ANDOP OROP NOTEQUOP
%right ASSIGN ADDEQOP MINEQOP MULEQOP DIVEQOP MODEQOP COLON
%token IINCROP DINCROP REFERVAR EXPOP
%left ADDOP MINOP COMMA
%left MULOP DIVOP MODOP
%nonassoc ELSE SEMIDEM


%start program



%%

program         : func_main LBRACEDEM declarations_optional statements RETURN constant SEMIDEM RBRACEDEM functions_optional
                ;

// ############### DECLARATIONS ###########################

declarations    : declarations declaration 
                | declaration
                ;

func_main       : FUNCTION MAIN LPAREN RPAREN main_return_type
                ;

declaration     : VAR var_names SEMIDEM
                ;

// ############### DATA TYPE ###########################

type    : INT 
        | CHAR 
        | SINGLE 
        | BOOL 
        | TSTRING
        ;

// ############### IDENTIFIERS ###########################

var_names       : ID COMMA var_names
                | ID array COMMA var_names
                | init
                ;


array   : array LBRACK array_exp RBRACK 
        | LBRACK array_exp RBRACK 
        ;

// ############### INITIAL VALUES ###########################

init    : var_init 
        | array_init
        ;

var_init        : ID type ASSIGN expression
                ;

array_init      : ID array type ASSIGN LBRACEDEM array_values RBRACEDEM 
                ;

array_values    : array_values COMMA constant 
                | constant 
                ;

// ############### STATEMENTS ###########################

statements      : statements statement 
                | statement 
                ;

statement       : if_statement 
                | for_statement 
                | while_statement 
                | assignment SEMIDEM 
                | CONTINUE SEMIDEM
                | do_while_statement
                | switch_statement
                | unless_statement
                | do_times_statement
                | BREAK SEMIDEM 
                | function_call SEMIDEM 
                | ID incrop SEMIDEM 
                | incrop ID SEMIDEM
                | input_statement
                | output_statement
                | expression
                ;

// ############### INPUT AND OUTPUT ###########################

input_statement : declaration ASSIGN INPUT LPAREN RPAREN SEMIDEM
                ;

outputall       : OUTPUT
                | OUTPUTNL
                ;

output_statement        : outputall LPAREN expression RPAREN SEMIDEM
                        ;


// ############### CONDITION STATEMENTS ###########################

if_statement    : IF LPAREN expression RPAREN tail else_if optional_else 
                | IF LPAREN expression RPAREN tail optional_else
                ;
 
else_if : else_if ELSE IF LPAREN expression RPAREN tail 
        | ELSE IF LPAREN expression RPAREN tail
        | else_if ELSE UNLESS LPAREN expression RPAREN tail 
        | ELSE UNLESS LPAREN expression RPAREN tail
        ;

optional_else   : ELSE tail 
                | /* empty */ 
                ;

unless_statement        : UNLESS LPAREN expression RPAREN tail else_if optional_else
                        | UNLESS LPAREN expression RPAREN tail optional_else
                        ;

do_times_statement      : DOTIMES LPAREN expression RPAREN tail
                        ;

switch_statement        : SWITCH LPAREN expression RPAREN LBRACEDEM switch_expression switch_default RBRACEDEM
                        ;

break_keyword   : BREAK
                | /* empty */
                ;

switch_expression       : CASE constant COLON statement break_keyword
                        ;

switch_default  : DEFAULT statement
                | DEFAULT
                ;


// ############### LOOP STATEMENTS ###########################

for_statement   : FOR LPAREN expression expression SEMIDEM expression RPAREN tail
                ;

while_statement : WHILE LPAREN expression RPAREN tail 
                ;

do_while_statement      : DO tail WHILE LPAREN expression RPAREN SEMIDEM
                        ;

// ############### EXPRESSION IN STATEMENTS ###########################

tail    : LBRACEDEM statements RBRACEDEM
        ;

 // ############### OPERATORS ###########################       

incrop  : IINCROP
        | DINCROP
        ;

relop   : GTHANOP
        | LTHANOP
        | GEQTHANOP
        | LEQTHANOP
        ;

equop   : EQUOP
        | NOTEQUOP
        ;

assop   : ADDEQOP
        | MINEQOP
        | MULEQOP
        | DIVEQOP
        | MODEQOP
        ;

logop   : OROP
        | ANDOP
        ;

arthio  : ADDOP 
        | MINOP
        | MULOP 
        | DIVOP
        | MODOP

// ############### EXPRESSIONS ###########################

expression      : expression arthio expression 
                | expression assop expression
                | expression EXPOP
                | ID incrop 
                | incrop ID 
                | ID ID
                | expression logop expression 
                | NOTOP expression 
                | expression equop expression 
                | expression relop expression 
                | LPAREN expression RPAREN 
                | sign constant 
                | function_call
                | switch_expression
                | declaration
                | ID
                ;


 array_exp      : expression arthio expression 
                | constant
                |
                ; 

// ############### CONSTANTS ###########################

sign    : MINOP 
        | /* empty */ 
        ; 

constant        : ICONST
                | CCONST
                | SCONST
                | FCONST
                | bool_const
                ;

bool_const      : TRUE
                | FALSE
                ;

// ############### ASSIGNMENT ###########################

assignment      : ID ASSIGN expression 
                ;


// ############### FUNCTIONS ###########################

function_call   : ID LPAREN call_params RPAREN SEMIDEM
                ;

call_params     : call_param 
                | SCONST 
                | /* empty */
                ;

call_param      : call_param COMMA expression 
                | expression
                |
                ;

functions_optional      : functions 
                        | /* empty */ 
                        ;

functions       : functions function 
                | function 
                ;

function        : function_head function_tail 
                ;

function_head   : FUNCTION ID LPAREN parameters_optional RPAREN return_type
                ;

return_type     : type 
                | VOID 
                ;

main_return_type        : INT
                        | VOID
                        ;

parameters_optional     : parameters 
                        | /* empty */ 
                        ;

parameters      : parameters COMMA parameter 
                | parameter 
                ;

parameter       : ID COLON type
                ;

function_tail   : LBRACEDEM declarations_optional statements_optional return_optional RBRACEDEM 
                ;

// ############### OPTIONALS ###########################

declarations_optional   : declarations 
                        | /* empty */ 
                        ;

statements_optional     : statements 
                        | /* empty */ 
                        ;

return_optional         : RETURN expression SEMIDEM
                        | /* empty */ 
                        ;


%%


void yyerror(const char *str)
{
    fprintf(stderr,"error: %s in line %d\n", str, yylineno);
    fprintf(stderr,"^\n");
    exit(1);
}

int main (int argc, char *argv[]){

	init_hash_table();
        
        printf("Enter Warden Source File with 'ward [sourcefile.wd]':\n");
        scanf("%s", str);
        scanf("%s", src);
        
	char search[] = "ward";
	char *ptr = strstr(str, search);

	if (ptr != NULL)
	{
		yyin = fopen(src, "r"); 
                if(yyin == NULL){
                        printf("File not detected or different file\n");
                        return 1;
                }
	}
	else
	{
		printf("\nPlease include \"ward\" then source file!\n\n");
                return 1;
	}


        yyparse();
	fclose(yyin);
	
	printf("\n\nParsing finished! No errors found!\n\n");
	
        system("pause");
        return 0;
}