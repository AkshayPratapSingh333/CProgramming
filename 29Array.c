#include <stdio.h>

int main() {
    int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int row = 2, col = 3;  // Indices within bounds
    printf("a[%d][%d] = %d\n", row, col, a[row][col]);

    return 0;
}
