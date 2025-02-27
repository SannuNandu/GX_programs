#include <stdio.h>
#include <math.h>

int binarytodecimal(int num){
	int decimal=0,i=0,rem;
	while(num!=0){
		rem=num%10;
		decimal+=rem*pow(2, i);
		num/=10;
		i++;
	}
	return decimal;
}

int main(){
	int num;
	printf("enter the binary number:");
	scanf("%d", &num);

	printf("the converted number is:%d", binarytodecimal(num));

	return 0;
}


