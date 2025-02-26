#include <stdio.h>
int main(){
	char input;
	printf("enter the input:");
	scanf("%c", &input);

	if(input>='A' && input<'Z'){
		printf("entered %c is upper_case\n", input);
	}
	else if(input>='a' && input<'z'){
		printf("entered %c is lower_case\n", input);
	}

	else if(input>='0' && input<'9'){
		printf("entered %c is number\n", input);
	}

	else{
		printf("Invalid input");
	}

	return 0;




}







