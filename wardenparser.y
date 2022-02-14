%{

%}

%union {
    int num;
    char sym;
}

%token EOL
%token<num> ICONST
%type<num> exp
%token PLUS

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