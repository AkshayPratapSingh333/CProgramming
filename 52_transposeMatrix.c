#include <stdio.h>

#define N 3 // Define the size of the matrix (NxN)

// Function to print the matrix
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[N][N], int transpose[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[N][N], transpose[N][N];

    // Taking input from the user
    printf("Enter elements of the %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix);

    // Calculate the transpose
    transposeMatrix(matrix, transpose);

    printf("\nTranspose of the Matrix:\n");
    printMatrix(transpose);

    return 0;
}
