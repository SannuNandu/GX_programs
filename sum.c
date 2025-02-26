/*#include <stdio.h>
int main(){
	int a=2;
	int b=3;
	int sum=0;
	sum=a+b;
	printf("sum:%d", sum);
	return 0;
}*/


/*


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

/*
#include <stdio.h>
int main(){
	int totaldays=1329;
	int years,weeks,days;
	years=totaldays/365;
	totaldays=totaldays%365;
	weeks=totaldays/7;
	days=totaldays%7;
	printf("years:%d\n", years);
	printf("weeks:%d\n", weeks);
	printf("days:%d\n", days);
	return 0;
}






#include <stdio.h>
int main(){
	int num1=4,num2=8,max;
	max=(num1>num2)?num1:num2;
	printf("the maximum number is:%d", max);
	return 0;
}







//prime numbers

#include <stdio.h>
int main(){
	int num,i,count;
	for(num=2;num<=100;num++){
		count=0;
		for(i=2;i<=num/2;i++){
		if(num%i==0){
		count++;	
		}
		}
		if(count==0){
		printf("%d \n", num);
	}
	}
	return 0;
}


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






#include <stdio.h>

void count_calls() {
    static int count = 0;  // Retains its value across function calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    count_calls();  
    count_calls();  
    count_calls(); 
    return 0;
   


#include <stdio.h>

//static int global_var = 10;

void display() {
	static int global_var=0;
	global_var+=10;
    printf("Global Variable: %d\n", global_var);
}

int main() {
    display();
    display();
    printf("global_var:%d", global_var); 
    return 0;
}








#include <stdio.h>
int main(){
	int i=0;
	while(i<=100){
		i++;
	printf("\n %d", i);
	}
	return 0;
}




#include <stdio.h>
int main(){
	int a;
	a=printf("Nanduu"),2,3;
	printf("%d", a);
	return 0;


}

*/


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



/*
#include <stdio.h>
int main(){
	char ch;
	ch=getchar();
	printf("ch=%c", ch);
	return 0;
}





#include <stdio.h>
int main(){
	int a;
	printf("enter a:");
	scanf("%d", &a);
	if(a);
		printf("Inside the block");
	//	printf("value of a:%d", a);
		printf("out of the block");
		return 0;



}



#include <stdio.h>
int main(){
	int arr[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	 printf("even:%d\n", even);
                printf("odd:%d\n", odd);

	printf("\n");
	return 0;
}




#include <stdio.h>
int main(){
	int i,arr[5];
	int arr1[5]={10,20,30,40,50};
	int arr2[5]={10,20,30,40,50};
	for(i=0;i<5;i++){
	arr[i]=arr1[i]+arr2[i];
	printf("%d\n", arr[i]);

}
//printf("%d\n", arr[i]);

return 0;
}



#include <stdio.h>
void main(){
	char name[5];
	printf("enter the name:");
	gets(name);
	printf("%s", name);


}



*/



