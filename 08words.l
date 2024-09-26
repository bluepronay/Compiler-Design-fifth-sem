%{
#include<stdio.h>
%}
%%
[a-zA-Z]* {printf("Alphabets");}
[0-9]*    {printf("Numbers");}
.+ 	  {printf("Special");}
%%

int main(){
yylex();
return 0;
}
