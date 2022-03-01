%option noyywrap

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "symtab.h"
	#include "parser.tab.h"
	extern FILE *yyin;
	extern FILE *yyout;
	
	int lineno = 1; // initialize to 1
	void ret_print(char *token_type);
	void yyerror();
%}

%x ML_COMMENT

letter      [a-zA-Z]
digit       [0-9]
alnum       {letter}|{digit}
print       [ -~]


ID          {letter}+{alnum}*
ICONST      "0"|[-]?[0-9]{digit}*
FCONST      "0"|[-]?{digit}*"."{digit}+
CCONST      (\'{print}\')|(\'\\[nftrbv]\')
SCONST      \"{print}*\"


%%

"//".*        { printf("Eat up comment at line %d\n", lineno); } 

"/*"          { printf("Eat up comment from line %d ", lineno); BEGIN(ML_COMMENT); }
<ML_COMMENT>"*/"    { printf("to line %d\n", lineno); BEGIN(INITIAL); }
<ML_COMMENT>[^*\n]+		
<ML_COMMENT>"*"			
<ML_COMMENT>"\n"    { lineno += 1; }
 

"char"                  { return CHAR; }
"int"|"integer"         { return INT; }
"single"                { return SINGLE; }
"if"                    { return IF; }
"else"                  { return ELSE; }
"while"                 { return WHILE; }
"for"                   { return FOR; }
"cont"|"continue"       { return CONTINUE; }
"break"                 { return BREAK; }
"return"                { return RETURN; }
"default"               { return DEFAULT; }
"unless"                { return UNLESS; }
"dotimes"               { return DOTIMES; }
"switch"                { return SWITCH; }
"main"                  { return MAIN; }
"false"                 { return FALSE; }
"true"                  { return TRUE; }
"var"                   { return VAR; }
"string"                { return TSTRING; }
"fn"                    { return FUNCTION; }
"do"                    { return DO; }
"bool"|"boolean"        { return BOOL; }
"void"                  { return VOID; }
"print"                 { return OUTPUT; }
"println"               { return OUTPUTNL; }
"scan"                  { return INPUT; }
"case"					{ return CASE; }


"+"                     { return ADDOP; }
"-"                     { return MINOP; }
"*"                     { return MULOP; }
"/"                     { return DIVOP; }
"++"                    { return IINCROP; }
"--"                    { return DINCROP; }
"||"                    { return OROP; }
"&&"                    { return ANDOP; }
"!"                     { return NOTOP; }
"=="                    { return EQUOP; }
"!="                    { return NOTEQUOP; }
">"                     { return GTHANOP; }
"<"                     { return LTHANOP; }
">="                    { return GEQTHANOP; }
"<="                    { return LEQTHANOP; }
"**"                    { return EXPOP; }
"%"                     { return MODOP; }
"+="                    { return MINEQOP; }
"-="                    { return ADDEQOP; }
"*="                    { return MULEQOP; }
"/="                    { return DIVEQOP; }
"%="                    { return MODEQOP; }
 



"("             { return LPAREN; }
")"             { return RPAREN; }
"["             { return LBRACK; }
"]"             { return RBRACK; }
"{"             { return LBRACEDEM; }
"}"             { return RBRACEDEM; }
":"             { return COLON; }
";"             { return SEMIDEM; }
"."             { return DOT; }
","             { return COMMA; }
"="             { return ASSIGN; }
"$"             { return REFERVAR; }



{ID}    {
        // insert identifier into symbol table
        insert(yytext, strlen(yytext), UNDEF, lineno);
        yylval.symtab_item = lookup(yytext);
        return ID;
        }
{ICONST}    { yylval.int_val   = atoi(yytext); return ICONST; }
{FCONST}    { yylval.double_val = atof(yytext); return FCONST; }
{CCONST}    { yylval.char_val  = yytext[0];    return CCONST; }
{SCONST}    { yylval.str_val = malloc(yyleng * sizeof(char));
              strcpy(yylval.str_val, yytext);  return SCONST; }



"\n"        { lineno += 1; }
[ \t\r\f]+  /* eat up whitespace */

.       { yyerror("Unrecognized character"); }

%%