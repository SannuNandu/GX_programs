#include <stdio.h>
int main(){
	int temp=0;
	int a,b;
	printf("enter the value of a:");
	scanf("%d", &a);
       	printf("enter the value of b:");
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf("enter the value of a after swapping:%d", a);
	printf("enter the value of b after swapping:%d", b);
	return 0;
} 

