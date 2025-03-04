#include <stdio.h>
#include <math.h>

int isBinary(int num) {
    
    while (num != 0) {
        if (num % 10 != 0 && num % 10 != 1) {
            return 0; 
        }
        num /= 10;
    }
    return 1; 
}

int binaryToDecimal(int num) {
    int decimal = 0, i = 0, rem;
    while (num != 0) {
        rem = num % 10;
        decimal += rem * pow(2, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int num;

   
    while(1){
    	 printf("Enter the binary number: ");
    
    	if (scanf("%d", &num) == 1) { 
        	break;
        }
        else{
        	printf("Invalid input. Please enter a valid binary number\n");
        	while(getchar()!='\n');
        }
    }

    
    if (num < 0) {
        printf("Invalid input. Binary numbers cannot be negative.\n");
        return 1;  
    }

    if (isBinary(num)) {
        printf("The converted decimal value is: %d\n", binaryToDecimal(num));
    } else {
        printf("Invalid input. Please enter a valid binary number.\n");
    }

    return 0;
}


