#include <stdio.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

int isempty() {
    return top == -1;
}

void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack overflow!\n");
    } else {
        stack[++top] = ch;
    }
}

char pop() {
    if (isempty()) {
        return -1; 
    } else {
        return stack[top--];
    }
}


int isBalanced(char expression[]) {
    for (int i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return 0;  // not balanced
            }
        }
    }
    
   if(isempty()) {
        return 1; 
    } else {
        return 0;  
    }
}


int main() {
    char expression[MAX];
    
    printf("Enter an expression: ");
    scanf("%s", expression);

    if (isBalanced(expression)) {
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is unbalanced.\n");
    }

    return 0;
}


