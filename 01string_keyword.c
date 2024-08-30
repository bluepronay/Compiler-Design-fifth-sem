#include<stdio.h>
#include<string.h>
int main(){
char keywords[100][100] = {
        "auto" ,"break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "int", "long",
        "register", "restrict", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while"};
// for(int i=0;i<32;i++){
//     printf("%s\n",keywords[i]);
// }

printf("Enter a string :");
char st[100];
gets(st);
int found=0;
for(int i=0;i<32;i++){
    if(strcmp(keywords[i],st)==0){
        printf("Keyword found");
        found=1;
    }
    
}
if(found==0){
    printf("keyword not found");
}

    return 0;
}