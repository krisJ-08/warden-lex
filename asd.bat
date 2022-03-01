flex lexical-warden.l
bison -d parser.y
gcc -o syntax-warden parser.tab.c lex.yy.c
syntax-warden.exe