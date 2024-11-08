%{
#include<stdio.h>
%}
%%
[a-zA-Z_]*[0-9]* {printf("Valid Identifier");}
.+ {printf("Invalid Identifier");}
%%
int main(){
while(1){
printf("Enter identifier : ");
yylex();
}
return 0;
}
