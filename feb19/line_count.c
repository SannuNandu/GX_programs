#include<stdio.h>
int main(){

	FILE *file;
	char line[300];
	int line_count=0;

	file=fopen("example.txt", "r");


	if(file==NULL){
		printf("error opening the file.\n");
		return 1;

	}


	while(fgets(line,sizeof(line),file)!=NULL){//(buffer name,buffer size,file pointer)

		line_count++;
	}


	fclose(file);

	printf("the file contains %d lines \n", line_count);

	return 0;
}




