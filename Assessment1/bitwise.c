#include <stdio.h>



int main(){

	int a,b;

	printf("enter the value of a:");
	scanf("%d", &a);

	printf("enter the value of b:");
	scanf("%d", &b);

	if(a^b){
		printf("a and b are not same\n");
	}else{
		printf("a and b are same\n");
	}

	return 0;
}






