#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
    FILE *file_ptr;

  
    char ch,str[100];
    int count=0;  //counter variable
  

    file_ptr = fopen("test.txt", "r");

    if (NULL == file_ptr) {
        printf("file can't be opened \n");
          return 0;
    }
    int alpha=0,num=0,special=0,line=1,space=0;

    while ((ch = fgetc(file_ptr)) != EOF) {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            alpha++;
        }
        else if(ch>='0'&&ch<='9'){
            num++;
        }
        else if(ch==10){
            line++;
        else{
            special++;
        }
    }
    
   int word=0;
    while (fscanf(file_ptr, "%s", str) != EOF) {
        word++;
    }
    printf("%d", word);
    
   printf("Alphabets %d Numbers %d Special %d Lines %d Words %d",alpha,num,special,line,word);

    fclose(file_ptr);
    return 0;
}