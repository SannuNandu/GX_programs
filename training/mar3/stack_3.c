#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push(int value){
	if(top==MAX-1){
		printf("stack overflow\n");
	}else{
		stack[++top]=value;
	}
}


int pop(){
	if(top==-1){
		printf("stack underflow\n");
	}else{
		return stack[top--];
	}
}


int reversed_array(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		push(arr[i]);
	
	}

	for(i=0;i<size;i++){
		arr[i]=pop();

	}

}

void print_array(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}


int main(){
	int arr[MAX]={1,2,3,4,5};
	int i;

	printf("Original array:\n");
	print_array(arr,MAX);

	reversed_array(arr,MAX);

	printf("reversed array:\n");
	print_array(arr,MAX);

	return 0;
}
