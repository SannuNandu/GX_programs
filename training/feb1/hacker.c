





#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;  

    
    for (int i = 0; i < size; i++) {
        
        for (int j = 0; j < size; j++) {
           
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            
            int min_distance = top;
            if (left < min_distance) {
                min_distance = left;
            }
            if (bottom < min_distance) {
                min_distance = bottom;
            }
            if (right < min_distance) {
                min_distance = right;
            }

           
            int value = n - min_distance;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}





