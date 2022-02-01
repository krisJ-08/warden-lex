%option yylineno

digits      ([0-9])+
letter      ([a-zA-Z])+
COMMENT		"//".*\n
WS		    [ \t]
H			[a-fA-F0-9]
E			[Ee][+-]?{letter}+
FS			(f|F|l|L)
IS			(u|U|l|L)*


%{

#include <stdio.h>
#include <string.h>
#include "test.tab.h"
void showError();
unsigned int currentLineNumber = 1;

%}


%%

"default"       return DEFAULT;
"break" 		return BREAK ;
"char" 		    return CHAR ;
"continue" 		return CONTINUE ;
"default" 		return DEFAULT ;
"repeat" 		return REPEAT ;
"double" 		return DOUBLE ;
"else" 		    return ELSE ;
"single" 		return SINGLE ;
"for" 		    return FOR ;
"if" 		    return IF ;
"int" 		    return INT ;
"return" 		return RETURN ;
"switch" 		return SWITCH ;
"until" 		return UNTIL ;
"main" 		    return IDENTIFIER ;
"yield"         return YIELD;
"fn"            return FN;
"unless         return UNLESS;
"var"           return VAR;
"dotimes"       return DOTIMES;
"bool"          return BOOL;
"true"          return TRUE;
"false"         return FALSE;
"+" 		    return PLUS ;
"-" 	    	return MINUS ;
"*" 	    	return TIMES ;
"/" 	    	return DIV ;
"%" 	    	return MODULO ;
"=" 	    	return EQUALS ;
"&" 	    	return BITAND ;
"|" 	    	return BITOR ;
"^" 	    	return BITXOR ;
"!" 	    	return NOT ;
"<" 	    	return LESS ;
">"     		return GREATER ;
"[" 	    	return LS ;
"]" 	    	return RS ;
"{" 	    	return LB ;
"}" 	    	return RB ;
"(" 	    	{return LP ;}
")" 	    	return RP ;
"?" 	    	return QMARK ;
":" 	    	return COLON ;
"." 	    	return DOT ;
";" 	    	return SEMI ;
"," 	    	return COMMA ;
"+=" 	    	return PLUSEQ ;
"-=" 	    	return MINUSEQ ;
"*=" 	    	return TIMESEQ ;
"/=" 	    	return DIVEQ ;
"%=" 	    	return MODULOEQ ;
"&=" 	    	return EMPEQ ;
"&&" 	    	return AND ;
"||" 	    	return OR ;
"==" 	    	return REQUALS ;
"!=" 	    	return NOTEQUAL ;
"<=" 	    	return LESSEQ ;
">=" 	    	return GREATEREQ ;
"++" 	    	return INCR ;
"--" 	    	return DECR ;
"//"            return SLC;
"/*"            return MLCO;
"*/"            return MLCC;

{L}({L}|{D})*			return IDENTIFIER ;
0[xX]{H}+{IS}?			return NUMBER ;
0{D}+{IS}?				return NUMBER ;
{D}+{IS}?				return NUMBER ;

L?'(\\.|[^\\'])+'		return NUMBER ; 
{D}+{E}{FS}?			return NUMBER ;
{D}*"."{D}+({E})?{FS}?	return NUMBER ;
{D}+"."{D}*({E})?{FS}?	return NUMBER ;
.						{ /* ignore bad characters */ }
{WS}		            ;
{COMMENT}	            ++currentLineNumber;
\n		                ++currentLineNumber;


%%

int yywrap(void)
{
	return 1 ;
}

void showError(){
    printf("Other input");
}