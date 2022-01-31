%{

#include <stdio.h>
#include <string.h>
#include "test.tab.h"
void showError();
%}


digits     ([0-9])+
letter       ([a-zA-Z])+
ws          ( \t\r\f\v)+
identifier 

%%

{alpha}			   {sscanf(yytext, "%s", yylval.name); return (STRING);}
{numbers}      {yylval.number = atoi(yytext); return (NUM);}
";"      		   {return (SEMICOLON);}
.      		     {showError(); return(OTHER);}

%%


void showError(){
    printf("error input");
}