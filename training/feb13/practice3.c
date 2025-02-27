#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int ascending(int a, int b) {
    return a - b; 
}


int descending(int a, int b) {
    return b - a; 
}


void sort(int arr[], int n, int (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cmp(arr[i], arr[j]) > 0) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, -1, 0, 4, 2, 100, 15, 20, 24, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    sort(arr, n, ascending);
    printf("Array in ascending order: ");
    printArray(arr, n);

    
    sort(arr, n, descending);
    printf("Array in descending order: ");
    printArray(arr, n);

    return 0;
}
