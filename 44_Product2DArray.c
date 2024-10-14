#include <stdio.h>

int main() {
    int row1, column1, row2, column2;
    
    // Input dimensions for the first matrix
    printf("Enter the dimension of first matrix: ");
    scanf("%d %d", &row1, &column1);

    // Input dimensions for the second matrix
    printf("Enter the dimension of second matrix: ");
    scanf("%d %d", &row2, &column2);

    // Check if the number of columns in the first matrix is equal to the number of rows in the second matrix
    if (column1 != row2) {
        printf("The number of columns in the first  should  match to the number of rows of second \n");
        return 1; // Exit the program if the dimensions do not allow matrix multiplication
    }

    int matrix1[row1][column1], matrix2[row2][column2], prod[row1][column2];

    // Initialize the product matrix to zero
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            prod[i][j] = 0;
        }
    }

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

    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {
                prod[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resulting product matrix
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
