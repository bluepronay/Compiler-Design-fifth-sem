#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
    FILE *file_ptr;

  
    char str[100];
    int count=0;  //counter variable
    char keywords[100][100] = {
        "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "int", "long",
        "register", "restrict", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while"};  

    file_ptr = fopen("test.txt", "r");

    if (NULL == file_ptr) {
        printf("file can't be opened \n");
          return 0;
    }


    while (fscanf(file_ptr, "%s", str) != EOF) {
        for(int i=0;i<32;i++){
            if(strcmp(str, keywords[i]) == 0){
                count++;
            }
        }
    }
    
    if(count==0){
        printf("Keyword not found in file");
    }else{
        printf(" %d Keywords found in file",count);
    }

    fclose(file_ptr);
    return 0;
}