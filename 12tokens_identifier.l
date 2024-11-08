%{
#include <stdio.h>
#include <stdlib.h>
%}

%%



\/\/.* {
    printf("Single-line Comment: %s\n", yytext);
}
"#include"[^"\n]*                { printf("Preprocessor Directive: %s\n", yytext); } 
"int"|"float"|"char"|"return"|"if"|"else"|"while"|"for"   { printf("Keyword: %s\n", yytext); }
[0-9]+                                                      { printf("Integer: %s\n",yytext); }
[a-zA-Z_][a-zA-Z0-9_]*\s*\(.*\) { printf("Function: %s\n", yytext); } 
[ \t\n]+                          { /* Ignore whitespace */ }
.                                 { /* Ignore other characters */ }

%%


int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    yyin = file;  
    yylex();          fclose(file); 
    return 0;
}

int yywrap() {
    return 1;
}
