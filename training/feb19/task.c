#include <stdio.h>
int main(){
    
    FILE *file;
    
    file=fopen("file1.txt", "w");
    
    if(file==NULL){
        printf("error opening a file");
        return 1;
    }
    
    fprintf(file,"hello,This is Nandu!");
    
    fclose(file);
    printf("written successfully!\n");
    
    return 0;
    
    
    
}

