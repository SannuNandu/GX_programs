








#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Insert at beginning
struct Node* insert_first(struct Node* head, int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed to allocate memory\n");
        return head;
    }
    newnode->data = value;
    newnode->next = head;//If the list is empty (head is NULL), then newnode->next will be NULL, and the new node will be the only node in the list.
    return newnode;//returning the newnode so that newnode becomes the new head of the list.
}
// Insert at end
struct Node* insert_last(struct Node* head, int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed to allocate memory\n");
        return head;
    }
    newnode->data = value;
    newnode->next = NULL;// The new node's next is NULL because it will be the last node
    if (head == NULL) { //Check if List is Empty:If the list is empty (head == NULL), the new node will simply become the head of the list.
        return newnode; //newnode becomes the head when head is null,because it is the only node present.
    }
    struct Node* temp = head;
    while (temp->next != NULL) { //If the list is not empty, the code uses a temporary pointer (temp) to traverse the list until it reaches the last node (temp->next == NULL).
        temp = temp->next;
    }
    temp->next = newnode; //Link New Node:Once the last node is found, the next pointer of the last node is updated to point to the newly created node, thus inserting it at the end.
    return head;
}
// Insert at specific position
struct Node* insert_between(struct Node* head, int value, int pos) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Failed to allocate memory\n");
        return head;
    }
    newnode->data = value;
    if (pos == 1) {
        newnode->next = head;
        return newnode;
    }
    struct Node* temp = head;  // 1->2->3->4->  4.5 ->  5->6->NULL
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) { // if temp is NULL (meaning we've reached the end of the list without finding the required position), we print an error message and return the unchanged head.
        printf("Position is greater than the size limit\n");
        free(newnode); //If the position is invalid (greater than the list size), free the new node and return the original list.
        return head;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
// Delete from beginning
struct Node* delete_start(struct Node* head) {
    if (head == NULL) {  
        printf("Empty\n");
        return NULL;
    }
    struct Node* temp = head; //now head value is holded by a temp pointer
    head = head->next; // and head pointer is updated to point to the second node(head->next)
    free(temp); //so that the first node which is stored in temp will be deleted
    return head;
}
// Delete from end
struct Node* delete_end(struct Node* head) {
    if (head == NULL) {
        printf("Empty\n");
        return NULL;
    }
    if (head->next == NULL) { 
        free(head); //If there’s only one node (head->next == NULL), the function frees that single node and returns NULL.
        return NULL;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) { 
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
// Delete at specific position
struct Node* delete_between(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }
    if (pos == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {  // 1->2->3del->4->NULL
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid Position!\n");
        return head;
    }
    struct Node* delete_node = temp->next;
    temp->next = delete_node->next;
    free(delete_node);
    return head;
}
// Display linked list
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// Search in linked list
int search(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
// Main function with user input
int main() {
    struct Node* head = NULL;
    int choice, value, pos;
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete at Position\n");
        printf("7. Display List\n");
        printf("8. Search Element\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                head = insert_first(head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                head = insert_last(head, value);
                break;
            case 3:
                printf("Enter value and position to insert: ");
                scanf("%d %d", &value, &pos);
                head = insert_between(head, value, pos);
                break;
            case 4:
                head = delete_start(head);
                break;
            case 5:
                head = delete_end(head);
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                head = delete_between(head, pos);
                break;
            case 7:
                display(head);
                break;
            case 8:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(head, value)) {
                    printf("%d found in the list.\n", value);
                } else {
                    printf("%d not found in the list.\n", value);
                }
                break;
            case 9:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
