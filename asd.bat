flex lex.l
bison -d parser.y
gcc lex.yy.c parser.tab.c
a.exe