#include <stdio.h>

int main() {
    int N, num;
    int sum = 0;

  
    printf("Enter the number of elements : ");
    scanf("%d", &N);

   
    for (int i = 1; i <= N; i++) {
        
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        
        sum += num * num;
    }

   
    printf("The sum of the squares of the %d numbers is: %d\n", N, sum);

    return 0;
}







