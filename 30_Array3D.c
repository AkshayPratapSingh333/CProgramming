// #include<stdio.h>
// int main(){
//     int a[2][2][3] = { {{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}} };
//     int i,j,k;

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             for(k=0;k<3;k++)
//             {
//                 printf("%d\n",a[i][j][k]);
//             }
//         }
//     }
//     return 0;       
// }
#include <stdio.h>

#define ROWS 3 // Number of rows in the 2D array
#define COLS 4 // Number of columns in the 2D array

// Function to initialize a 2D array with values
void initializeArray(int arr[ROWS][COLS]) {
    printf("Initializing 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display the 2D array
void displayArray(int arr[ROWS][COLS]) {
    printf("\nDisplaying 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[ROWS][COLS];

    // Initialize the 2D array
    initializeArray(array);

    // Display the 2D array
    displayArray(array);


    return 0;
}