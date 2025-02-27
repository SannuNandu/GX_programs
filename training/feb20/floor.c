#include <stdio.h>

int main() {
    int currentFloor = 1; // Lift starts on the first floor
    int targetFloor;
    int choice;

    printf("Lift Simulation\n");
    printf("Initial floor: 1\n");

    while (1) {
        printf("\nSelect Mode:\n");
        printf("1. Move\n");
        printf("2. Exit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the target floor (2, 3, or 4): ");
            scanf("%d", &targetFloor);

        
            if (targetFloor < 1 || targetFloor > 4) {
                printf("Invalid floor number! Please enter a floor between 1 and 4.\n");
                continue; 
            }

          
            if (currentFloor == targetFloor) {
                printf("The lift is already on floor %d.\n", currentFloor);
            } else {
              
                printf("Moving from floor %d to floor %d...\n", currentFloor, targetFloor);
                currentFloor = targetFloor; 
                printf("Now the lift is on floor %d.\n", currentFloor);
            }
        } else if (choice == 2) {
            printf("Exiting the program. Have a great day!\n");
            break;
        } else {
            printf("Invalid choice! Please enter 1 for Move or 2 for Exit.\n");
        }
    }

    return 0;
}




