flex lexical-warden.l
bison -d parser-warden.y
gcc -o syntax-warden parser-warden.tab.c lex.yy.c
syntax-warden.exe