%{
#include<stdio.h>
%}
%%
[0-1][0-9][:][0-5][0-9][:][0-5][0-9] {printf("Valid Time\n");}
[2][0-3][:][0-5][0-9][:][0-5][0-9] {printf("Valid Time\n");}
.+ {printf("Invalid Time");}
%%
int main(){
while(1){
printf("Enter the time : ");
yylex();
return 0;
}
}
