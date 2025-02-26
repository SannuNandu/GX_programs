

/*
#include <stdio.h>
int main(){
	int var=10;
	int *ptr1=&var;
	int **ptr2=&ptr1;
	 printf("var:%d\n", var);
	 printf("*ptr1:%d\n", ptr1);
	 printf("**ptr2:%d\n", **ptr2);
	 
	 return 0;

}

*/




#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;

    // Create a double pointer
    int** arr;

    // Allocate memory for rows
    arr = (int**)malloc(m * sizeof(int*));

    // Allocate memory for each row
    for (int i = 0; i < m; i++)
        arr[i] = (int*)malloc(n * sizeof(int));

    // Initialize with some values
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i * n + j + 1;

        }
    }

    // Print the array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}


