%{
#include<stdio.h>
%}
%%
[6-9][0-9]{9} {printf("\n Mobile no is valid\n");}
.+ {printf("\n Invalid Mobile No\n");}
%%

int main(){
printf("\n Enter mobile no ");
yylex();
return 0;
}
