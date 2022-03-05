flex lexical-warden.l
bison -d parser-warden.y
gcc -o parser-warden parser-warden.tab.c lex.yy.c
parser-warden.exe