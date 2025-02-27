
#include <stdio.h>

int main(){
	int a,b;
	char op;
	printf("enter an operator:('+','-','*','/') : " );
        scanf("%c",&op);
	printf("The valu of a : ");
	scanf("%d", & a);
	printf("The valu of b : ");
        scanf("%d", &b);
	 switch(op){

		 case '+':
			 printf("%d+%d=%d\n", a,b,a+b);
			 break;
	         case '-':
                         printf("%d-%d=%d\n", a,b,a-b);
                         break;
		 case '*':
                         printf("%d*%d=%d\n", a,b,a*b);
                         break;
		 case '/':
                         printf("%d/%d=%d\n", a,b,a/b);
                         break;
		 default:
			 printf("error! operator is incorrect");
	 }

	 return 0;
}

