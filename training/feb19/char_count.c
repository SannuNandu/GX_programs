#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count=0;

    file = fopen("example.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(file) != EOF)&&(ch!='\0')){      
        count++;
    }


    fclose(file);
    printf("%d", count);
    return 0;
}
   
