#include <stdio.h>
#include <stdlib.h>


int *stack;
int top=-1;

int is_full(int size){
	return top==size-1;
}

int is_empty(){
	return top==-1;
}

void push(int value,int size){
	if(is_full(size)){
		printf("stack overflow\n");
	}else{
		stack[++top]=value;
		printf("pushed:%d\n", value);
	}

}

int pop(){
	if(is_empty()){
		printf("stack underflow\n");
		return 1;
	}else{
		int popped_value=stack[top--];
		printf("popped:%d\n", popped_value);
		return popped_value;
	}

}

int peek(){
	if(is_empty()){
		printf("stack is empty\n");
		return 1;
	}else{
		return stack[top];
	}

}


int main(){

	int size,i,n,value;
	printf("enter the size of the stack:");
	scanf("%d", &size);
	
	 stack = (int *)malloc(size * sizeof(int));
	 if (stack == NULL) {
	 printf("Memory allocation failed!\n");
	 return 1;
	 }

	printf("enter the number of elements to be pused:");
	scanf("%d", &n);

	if(n>size){
		printf("Cannot push more than %d elements\n", size);
		n=size;
	}

	for(i=0;i<n;i++){
		printf("Enter the element %d:\n", i+1);
		scanf("%d", &value);
		push(value, size);
	}

	printf("the top element is:%d\n", peek());

	pop();
	pop();

	printf("the top element is:%d\n", peek());

	free(stack);

	return 0;
}

