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

// Function to mirror the matrix horizontally
void mirrorMatrixHorizontally(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - j - 1];
            matrix[i][N - j - 1] = temp;
        }
    }
}

int main() {
    int matrix[N][N];

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

    mirrorMatrixHorizontally(matrix);

    printf("\nMatrix after mirroring horizontally:\n");
    printMatrix(matrix);

    return 0;
}
