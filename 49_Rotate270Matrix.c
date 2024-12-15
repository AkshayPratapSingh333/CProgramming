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

// Function to reverse each row of the matrix
void reverseRows(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

// Function to rotate the matrix 270 degrees anticlockwise
void rotateMatrix270AntiClockwise(int matrix[N][N]) {
    // Step 1: Transpose the matrix
    transposeMatrix(matrix);
    // Step 2: Reverse each row
    reverseRows(matrix);
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

    rotateMatrix270AntiClockwise(matrix);

    printf("\nMatrix after 270-degree anticlockwise rotation:\n");
    printMatrix(matrix);

    return 0;
}
