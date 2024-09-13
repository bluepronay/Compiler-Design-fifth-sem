%{
#include<stdio.h>
char str[100]; //declaring
%}
%%
[\n] {printf("Enter your name : ");
 scanf("%s",str);
 printf("Hello, %s\n",str);}
%%

void main(){
yylex();
}
