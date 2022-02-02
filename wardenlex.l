%option noyywrap
 
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int lineno = 1; // initialized number of line with 1
    int words = 0;  //number of lexemes
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
ICONST      "0"|[0-9]{digit}*
FCONST      "0"|{digit}*"."{digit}+
CCONST      (\'{print}\')|(\'\\[nftrbv]\')
STRING      \"{print}*\"

%%

"//".*                  { ret_commt("Line is commented at line %d\n", lineno); } 
 
"/*"                    { ret_commt("Start of comment from line %d\n", lineno); BEGIN(ML_COMMENT); }
<ML_COMMENT>"*/"        { ret_commt("Ends to line %d\n", lineno); BEGIN(INITIAL); }
<ML_COMMENT>[^*\n]+     
<ML_COMMENT>"*"         
<ML_COMMENT>"\n"        { lineno += 1; }
 
 
"char"|"CHAR"|"character"|"CHARACTER"           { ret_print("KEYWORD_CHAR"); }
"int"|"INT"|"integer"|"INTEGER"             { ret_print("KEYWORD_INT"); }
"single"|"SINGLE"       { ret_print("KEYWORD_SINGLE"); }
"if"|"IF"               { ret_print("KEYWORD_IF"); }
"else"|"ELSE"           { ret_print("KEYWORD_ELSE"); }
"while"|"WHILE"         { ret_print("KEYWORD_WHILE"); }
"for"|"FOR"             { ret_print("KEYWORD_FOR"); }
"cont"|"CONT"|"continue"|"CONTINUE"  { ret_print("KEYWORD_CONTINUE"); }
"break"|"BREAK"         { ret_print("KEYWORD_BREAK"); }
"return"|"RETURN"       { ret_print("KEYWORD_RETURN"); }
"default"|"DEFAULT"     { ret_print("KEYWORD_DEFAULT"); }
"yield"|"YIELD"         { ret_print("KEYWORD_YIELD"); }
"unless"|"UNLESS"       { ret_print("KEYWORD_UNLESS"); }
"dotimes"|"DOTIMES"     { ret_print("KEYWORD_DOTIMES"); }
"switch"|"SWITCH"       { ret_print("KEYWORD_SWITCH"); }
"main"                  { ret_print("RESWORD_MAIN"); }
"false"|"FALSE"         { ret_print("RESWORD_FALSE"); }
"true"|"TRUE"           { ret_print("RESWORD_TRUE"); }
"var"|"VAR"             { ret_print("KEYWORD_VAR"); }
"string"|"STRING"       { ret_print("KEYWORD_STRING"); }
"fn"|"FN"               { ret_print("KEYWORD_FUNCTION"); }
"do"|"DO"               { ret_print("KEYWORD_DO"); }
"bool"|"BOOL"|"boolean"|"BOOLEAN"           { ret_print("KEYWORD_BOOL"); }

 
 
"+"                     { ret_print("MINOP"); }
"-"                     { ret_print("ADDOP"); }
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
 
 
"("             { ret_print("LPAREN"); }
")"             { ret_print("RPAREN"); }
"["             { ret_print("LBRACK"); }
"]"             { ret_print("RBRACK"); }
"{"             { ret_print("LBRACE"); }
"}"             { ret_print("RBRACE"); }
";"             { ret_print("SEMI"); }
"."             { ret_print("DOT"); }
","             { ret_print("COMMA"); }
"="             { ret_print("ASSIGN"); }
"&"             { ret_print("REFER"); }

{ARRAY}         { ret_print("ARRAY"); }
{ID}            { ret_print("ID"); }
{ICONST}        { ret_print("ICONST"); }
{FCONST}        { ret_print("FCONST"); }
{CCONST}        { ret_print("CCONST"); }
{STRING}        { ret_print("STRING"); }

"\n"*           { lineno += 1; }
[ \t\r\f]+      ;
.               { yyerror("INVALID"); }
 
%%
 
void ret_print(char *token_type){
    words++;
    printf("Lexemes: %s\tToken: %s\tLineNo: %d\n", yytext, token_type, lineno);
    fprintf(yyout,"Lexeme: %s\tToken: %s\tLineNo: %d\n",yytext, token_type, lineno);
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

    printf("Enter .wd file name\n");
    scanf("%123s",str);
    strcat(str,".wd");
    yyin = fopen(str, "r"); 
    yyout = fopen("Output.txt", "w"); 
    yylex();
	fprintf(yyout,"\n\n\nTotal Tokens = %d",words);

    return 0;
}