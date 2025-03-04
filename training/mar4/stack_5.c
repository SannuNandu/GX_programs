#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50

char stack[MAX];
int top=-1;

int prec(char c){
	if(c=='+' || c=='-'){
		return 1;
	}
	if (c == '*' || c == '/') {
        return 2;
	}
	return 0;
}

int isempty(){
	return top==-1;
}

void push(char c){
	if(top==MAX-1){
		printf("Stack overflow!\n");
	}else{
		stack[++top] = c;
	}
}

char pop() {
    if (isempty()) {
        return -1;
    } else {
        return stack[top--];
    }
}

void infixtopostfix(char *infix){
	int i=0,j=0;
	char postfix[MAX];
	while(infix[i]!='\0'){
		if(isalnum(infix[i])){
                        postfix[j++]=infix[i];
                        }else if(infix[i]=='('){
				push(infix[i]);
			}else if(infix[i]==')'){
				while(!isempty() && stack[top]!='('){
					postfix[j++]=pop();
				}
				pop();
			}else{
				while(!isempty() && prec(infix[i]) <= prec(stack[top])){
						postfix[j++]=pop();
						}
				push(infix[i]);
			}
		i++;
	}

	while(!isempty()){
		postfix[j++]=pop();
	}

	postfix[j]='\0';
	printf("postfix exp:%s\n", postfix);

} 

int main(){

	char infix[MAX];
	printf("enter the infix expression:");
	scanf("%s", infix);

	infixtopostfix(infix);

	return 0;

}
