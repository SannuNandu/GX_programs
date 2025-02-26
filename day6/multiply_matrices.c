#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int** A, int r1, int c1, int** B, int r2, int c2, int** result) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize the element
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

