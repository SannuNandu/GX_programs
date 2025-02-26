#include <stdio.h>
#include <math.h>

int binary2decimal(int n){
	int decimal=0,i=0,rem;

	while(n!=0){
		rem=n%10;
		decimal+=rem*pow(2,i);
		n/=10;
		i++;
	}
	return decimal;
}








int main()
{
	int n;
	printf("enter the binary number:");
	scanf("%d", &n);

//	binary2decimal(n);
	printf("the decimal number is:%d", binary2decimal(n));
	return 0;

}
