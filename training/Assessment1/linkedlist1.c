
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insert_first(struct node *head, int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return head;  
    }

    newnode->data = value;
    newnode->next = head;  
    return newnode;  
}


void print_list(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int get_valid_input() {
    int value;
    while (1) {
        if (scanf("%d", &value) != 1 || value < 0) {
            
            while (getchar() != '\n');  
            printf("Invalid input. Please enter a non-negative integer: ");
        } else {
            return value;  
        }
    }
}

int main() {
    struct node *head = NULL;
    int value, n;

    printf("How many values do you want to insert? ");
    n = get_valid_input();  

   
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        value = get_valid_input();  
        head = insert_first(head, value);  
    }

   
    printf("Enter another value to insert: ");
    value = get_valid_input();  
    head = insert_first(head, value);  

    print_list(head);

    return 0;
}

