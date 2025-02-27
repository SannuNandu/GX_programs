#include <stdio.h>
int main(){
	int num,i;
	printf("the number is:");
	scanf("%d", &num);
	int count=0;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==0){
		printf("%d is a prime number", num);
	}
	else{
		printf("%d is not a prime", num);
	}
	return 0;
}

