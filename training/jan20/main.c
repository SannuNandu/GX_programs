#include <stdio.h>
#include <stdlib.h>
#include "allocate_matrix.c"
#include "get_matrix_input.c"
#include "free_matrix.c"
#include "multiply_matrices.c"
#include "print_matrix.c"


int main() {
    int r1, c1, r2, c2;

    // Input dimensions of Matrix A
    printf("Enter dimensions of Matrix A (rows and columns): ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of Matrix B
    printf("Enter dimensions of Matrix B (rows and columns): ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 1;
    }

    // Allocate memory for matrices
    int** A = allocateMatrix(r1, c1);
    int** B = allocateMatrix(r2, c2);
    int** result = allocateMatrix(r1, c2);

    // Input matrices
    printf("Input Matrix A:\n");
    inputMatrix(A, r1, c1);
    printf("Input Matrix B:\n");
    inputMatrix(B, r2, c2);

    // Multiply matrices
    multiplyMatrices(A, r1, c1, B, r2, c2, result);

    // Print the result
    printf("Resultant Matrix:\n");
    printMatrix(result, r1, c2);

    // Free allocated memory
    freeMatrix(A, r1);
    freeMatrix(B, r2);
    freeMatrix(result, r1);

    return 0;
}

