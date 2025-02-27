#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    
    d = d % n;

    int temp[d];

    
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int d1 = 2;
    
    leftRotate(arr1, n1, d1);
    printArray(arr1, n1);  
    
    int arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int d2 = 4;
    
    leftRotate(arr2, n2, d2);
    printArray(arr2, n2);  
    
    return 0;
}

