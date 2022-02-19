%option noyywrap
 
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "./Warden Syntax/parser.tab.h"
    int lineno = 1;
    int words = 0;
    void ret_print(char *token_type);
    void yyerror();
    void ret_commt();
    char str[20];
   
%}

%x ML_COMMENT

letter      [a-zA-Z]
digit       [0-9]
alnum       {letter}|{digit}
print       [ -~]


ARRAY       ({letter}+{alnum}*"[".+"]")|({letter}+{alnum}*"["+"]")
ID          {letter}+{alnum}*
INVALID     [0-9|"_"|"#"|"@"|"^"|"\\"|"`"|"~"]+[a-zA-Z]+
ICONST      "0"|[-]?[0-9]{digit}*
FCONST      "0"|[-]?{digit}*"."{digit}+
CCONST      (\'{print}\')|(\'\\[nftrbv]\')
STRING      \"{print}*\"


%%

"//".*                  { ret_commt("Line is commented at line %d\n", lineno); } 
 
"/*"                    { ret_commt("Start of comment from line %d\n", lineno); BEGIN(ML_COMMENT); }
<ML_COMMENT>"*/"        { ret_commt("Ends to line %d\n", lineno); BEGIN(INITIAL); }
<ML_COMMENT>[^*\n]+     
<ML_COMMENT>"*"         
<ML_COMMENT>"\n"        { lineno += 1; }
 


"char"                  { return CHAR; }
"int"|"integer"         { ret_print("INT"); }
"single"                { ret_print("SINGLE"); }
"if"                    { ret_print("IF"); }
"else"                  { ret_print("ELSE"); }
"while"                 { ret_print("WHILE"); }
"for"                   { ret_print("FOR"); }
"cont"|"continue"       { ret_print("CONTINUE"); }
"break"                 { ret_print("BREAK"); }
"return"                { ret_print("RETURN"); }
"default"               { ret_print("DEFAULT"); }
"unless"                { ret_print("UNLESS"); }
"dotimes"               { ret_print("DOTIMES"); }
"switch"                { ret_print("SWITCH"); }
"main"                  { ret_print("MAIN"); }
"false"                 { ret_print("FALSE"); }
"true"                  { ret_print("TRUE"); }
"var"                   { ret_print("VAR"); }
"string"                { ret_print("TSTRING"); }
"fn"                    { ret_print("FUNCTION"); }
"do"                    { ret_print("DO"); }
"bool"|"boolean"        { ret_print("BOOL"); }
"void"                  { ret_print("VOID"); }
"print"                 { ret_print("OUTPUT"); }
"println"               { ret_print("OUTPUTNL"); }
"scan"                  { ret_print("INPUT"); }


"+"                     { ret_print("ADDOP"); }
"-"                     { ret_print("MINOP"); }
"*"                     { ret_print("MULOP"); }
"/"                     { ret_print("DIVOP"); }
"++"                    { ret_print("IINCROP"); }
"--"                    { ret_print("DINCROP"); }
"||"                    { ret_print("OROP"); }
"&&"                    { ret_print("ANDOP"); }
"!"                     { ret_print("NOTOP"); }
"=="                    { ret_print("EQUOP"); }
"!="                    { ret_print("NOTEQUOP"); }
">"                     { ret_print("GTHANOP"); }
"<"                     { ret_print("LTHANOP"); }
">="                    { ret_print("GEQTHANOP"); }
"<="                    { ret_print("LEQTHANOP"); }
"**"                    { ret_print("EXPOP"); }
"%"                     { ret_print("MODOP"); }
"+="                    { ret_print("MINEQOP"); }
"-="                    { ret_print("ADDEQOP"); }
"*="                    { ret_print("MULEQOP"); }
"/="                    { ret_print("DIVEQOP"); }
"%="                    { ret_print("MODEQOP"); }
 



"("             { ret_print("LPAREN"); }
")"             { ret_print("RPAREN"); }
"["             { ret_print("LBRACK"); }
"]"             { ret_print("RBRACK"); }
"{"             { ret_print("LBRACEDEM"); }
"}"             { ret_print("RBRACEDEM"); }
":"             { ret_print("COLON"); }
";"             { ret_print("SEMIDEM"); }
"."             { ret_print("DOT"); }
","             { ret_print("COMMA"); }
"="             { ret_print("ASSIGN"); }
"$"             { ret_print("REFERVAR"); }



{ARRAY}         { ret_print("ARRAY"); }
{ID}            { ret_print("ID"); }
{INVALID}       { ret_print("INVALID IDENTIFIER"); }
{ICONST}        { yylval.num = atoi(yytext); return ICONST;}
{FCONST}        { yylval.sing = atoi(yytext); return FCONST; }
{CCONST}        { yylval.ltr = atoi(yytext); return CCONST; }
{STRING}        { yylval.str = atoi(yytext); return CCONST; }

"\n"            { lineno += 1; }
[ \t\r\f]+      ;
.               { yyerror("INVALID"); }
 

%%
 

void ret_print(char *token_type){
    words++;
    printf("LineNo: %d\t Lexeme: %s\tToken: %s\n", lineno, yytext, token_type);
    fprintf(yyout,"LineNo: %d\t Lexeme: %s\tToken: %s\n", lineno, yytext, token_type);
}
 
void yyerror(char *message){
    printf("Error: \"%s\" in line %d. Token = %s\n", message, lineno, yytext);
    fprintf(yyout,"Error: \"%s\" in line %d. Lexeme = %s\n", message, lineno, yytext);
}

void ret_commt(char *message, int lineno){
    printf(message, lineno);
    fprintf(yyout, message, lineno);
}

int main(){
    extern FILE *yyin, *yyout; 

    printf("Enter Warden Source File:\n");
    scanf("%123s",str);
    strcat(str,".wd");
    yyin = fopen(str, "r"); 
    if(yyin == NULL){
        printf("File not detected or different file\n");
        return 1;
    }
    yyout = fopen("Symbol Table.txt", "w+"); 
    yylex();
    printf("\n\nTotal Tokens = %d", words);
	fprintf(yyout,"\n\n\nTotal Tokens = %d",words);

    return 0;
}