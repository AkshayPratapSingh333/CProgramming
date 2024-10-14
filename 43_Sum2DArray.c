#include <stdio.h>

int main() {
    int row1, column1, row2, column2;
    
    // Input dimensions for the first matrix
    printf("Enter the dimension of first matrix: ");
    scanf("%d %d", &row1, &column1);

    // Input dimensions for the second matrix
    printf("Enter the dimension of second matrix: ");
    scanf("%d %d", &row2, &column2);

    // Check if dimensions are the same for both matrices
    if (row1 != row2 || column1 != column2) {
        printf("Dimensions should be equal\n");
        return 1; // Exit the program if dimensions do not match
    }

    int matrix1[row1][column1], matrix2[row2][column2], sum[row1][column1];

    // Input elements for the first matrix
    printf("Enter the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting sum matrix
    printf("The sum of two matrices is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
