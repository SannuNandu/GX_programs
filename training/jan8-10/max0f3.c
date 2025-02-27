#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter a:");
	scanf("%d", &a);
	printf("enter b:");
        scanf("%d", &b);
	printf("enter c:");
        scanf("%d", &c);
	if(a>b){
	if(a>c){
	printf("%d is greater", a);
	}
	else{
	printf("%d is greater", c);
	}
	}
	else{
	if(b>c){
	printf("%d is maximum", b);
	}
	else{
	printf("%d is greater", c);
	}
	
	}
	return 0;
}

