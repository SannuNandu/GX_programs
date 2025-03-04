#include <stdio.h>
#include <stdlib.h> 

int count_digits(int num) {
    int count = 0;
    
    if (num == 0) {
        return 1;
    }

    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int a, b;

    printf("Enter the values of a & b: ");
    
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
    } else {
        if (a == 0 || b == 0 || count_digits(a) > 7 || count_digits(b) > 7) {
            printf("Invalid input: 0 is not valid or number of digits is more than 7\n");
        } else {
            if (a ^ b) {  
                printf("a and b are not the same\n");
            } else {
                printf("a and b are the same\n");
            }
        }
    }

    return 0;
}

