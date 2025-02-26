#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int nonZeroIndex = 0; 
    
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }
   
    for (int i = nonZeroIndex; i < n; i++) {
        arr[i] = 0;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    moveZerosToEnd(arr1, n1);
    printArray(arr1, n1);  
    
    int arr2[] = {10, 20, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    moveZerosToEnd(arr2, n2);
    printArray(arr2, n2); 
    
    int arr3[] = {0, 0};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    moveZerosToEnd(arr3, n3);
    printArray(arr3, n3);  
    
    return 0;
}

