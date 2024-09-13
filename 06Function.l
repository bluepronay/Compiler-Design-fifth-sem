%{
#include<stdio.h>
void display(){
	char str[100];
	printf("Enter your name : ");
	scanf("%s",str);
        printf("Hello, %s\n",str);
}

%}
%%
[\n] {display();}
%%

void main(){
yylex();
}

