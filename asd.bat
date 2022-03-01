flex lex.l
bison -d parser.y
gcc -o warden parser.tab.c lex.yy.c
warden.exe