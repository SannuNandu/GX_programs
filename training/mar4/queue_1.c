#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty() {
    return front == -1;
}

int isFull() {
    return rear == MAX - 1;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d.\n", value);
    } else {
        if (front == -1) {
            front = 0;  
        }
        rear++;
        queue[rear] = value;
        printf("%d enqueued to queue\n", value);
    }
}


void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("%d dequeued from queue\n", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;  
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (isEmpty()) {
        printf("Queue is empty. No element to peek.\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}


int size() {
    if (isEmpty()) {
        return 0;
    } else {
        return rear - front + 1;
    }
}

void clear() {
    front = rear = -1;
    printf("Queue has been cleared.\n");
}

int main() {
    int value, choice;

    while (1) {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Peek\n");
        printf("5. Size of Queue\n");
        printf("6. Clear Queue\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  
                if (isFull()) {
                    printf("Queue is full. Cannot enqueue any more elements.\n");
                } else {
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    enqueue(value);
                }
                break;
            case 2:  
                dequeue();
                break;
            case 3:  
                display();
                break;
            case 4:  
                peek();
                break;
            case 5:  
                printf("Queue size: %d\n", size());
                break;
            case 6:  
                clear();
                break;
            case 7: 
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

