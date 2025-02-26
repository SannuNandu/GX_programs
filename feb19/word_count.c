#include<stdio.h>

int main(){
	FILE *file;
	char word[100];
	int word_count;

	file=fopen("example.txt","r");

	if(file==NULL){
		printf("error opening the file\n");
		return 1;
	}

	while(fscanf(file,"%s",word)!=EOF){//(file pointer,format specifier of buffer,buffer)

		word_count++;
	}

	fclose(file);

	printf("The file contains %d words.\n", word_count);
	
	return 0;

}






