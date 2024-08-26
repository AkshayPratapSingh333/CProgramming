#include <stdio.h>

int main() {
    int a[3][3], i, j, z = 0, nz = 0, k = 0;

    // Input in array
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Output the matrix
    printf("The matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Count zeros and non-zeros
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j] == 0)
                z++;
            else
                nz++;
        }
    }

    // Check if the matrix is sparse
    if(z > nz) {
        printf("This is a sparse matrix.\n");

        // Create a sparse matrix representation
        int S[nz][3]; // 3 columns: row, column, value

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                if(a[i][j] != 0) {
                    S[k][0] = i;
                    S[k][1] = j;
                    S[k][2] = a[i][j];
                    k++;
                }
            }
        }

        // Display the sparse matrix
        printf("Sparse Matrix Representation:\n");
        printf("Row\tCol\tValue\n");
        for(i = 0; i < nz; i++) {
            printf("%d\t%d\t%d\n", S[i][0], S[i][1], S[i][2]);
        }
    } else {
        printf("This is not a sparse matrix.\n");
    }

    return 0;
}
