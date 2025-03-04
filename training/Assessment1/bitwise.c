#include <stdio.h>



int main(){

	int a,b;

	printf("enter the values of a & b:");
	if(scanf("%d %d", &a, &b)!=2){
		printf("invalid\n");
	}

	
	else{
		if(a^b){
		printf("a and b are not same\n");
	}else{
		printf("a and b are same\n");
	}
	}

	return 0;
}






