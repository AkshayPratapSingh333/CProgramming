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

// Function to transpose the matrix
void transposeMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

// Function to reverse each column of the matrix
void reverseColumns(int matrix[N][N]) {
    for (int j = 0; j < N; j++) {
        for (int i = 0, k = N - 1; i < k; i++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[k][j];
            matrix[k][j] = temp;
        }
    }
}

// Function to rotate the matrix 270 degrees clockwise
void rotateMatrix270Clockwise(int matrix[N][N]) {
    // Step 1: Transpose the matrix
    transposeMatrix(matrix);
    // Step 2: Reverse each column
    reverseColumns(matrix);
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

    rotateMatrix270Clockwise(matrix);

    printf("\nMatrix after 270-degree clockwise rotation:\n");
    printMatrix(matrix);

    return 0;
}
