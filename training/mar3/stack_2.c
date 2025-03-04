
//overflow and underflow

#include <stdio.h>
#include <stdlib.h>

#define MAX 3 

int stack[MAX];
int top = -1;


int isFull() {
    return top == MAX - 1;
}


int isEmpty() {
    return top == -1;
}


void push(int value) {
    if (isFull()) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow! No elements to pop.\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
 
    push(10);
    push(20);
    push(30);
    push(40);  

    pop();
    pop();
    pop();
    pop();  

    return 0;
}

