#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
    FILE *file_ptr;
    char ch;
    char str[100];
  
    int alpha = 0, num = 0, special = 0, line = 1, word = 0;

    file_ptr = fopen("test.txt", "r");

    if (file_ptr == NULL) {
        printf("File can't be opened \n");
        return 0;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alpha++;
        } else if (ch >= '0' && ch <= '9') {
            num++;
        } else if (ch == '\n') {
            line++;
        } else if (ch != ' ' && ch != '\t') {  
            special++;
        }
    }

    rewind(file_ptr);

    while (fscanf(file_ptr, "%s", str) != EOF) {
        word++;
    }


    printf("Alphabets: %d\nNumbers: %d\nSpecial Characters: %d\nLines: %d\nWords: %d\n", alpha, num, special, line, word);

    fclose(file_ptr);
    return 0;
}
