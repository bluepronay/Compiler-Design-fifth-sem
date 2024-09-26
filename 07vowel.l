%{
#include <stdio.h>
%}

%%
^[aeiouAEIOU].* {printf("Vowel is present\n");}
.+ {printf("Vowel is not present\n"); }
%% 

int main() {
    while (1) {
        printf("Enter a string: ");
        yylex();  // Process the input
    }
    return 0;
}
