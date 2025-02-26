#include <stdio.h>

int main() {
    int  x, result = 1;
    int n;

    
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) {
        result *= x;
    }

 
    printf("The result of %d raised to the power of %d is: %d\n", x, n, result);

    return 0;
}

