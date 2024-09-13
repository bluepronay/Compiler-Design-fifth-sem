%{
#include<stdio.h>
%}
%%
[\n] {printf("Pronay");}
%%

void main(){
yylex();
}
