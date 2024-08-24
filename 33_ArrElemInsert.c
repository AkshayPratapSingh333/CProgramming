#include <stdio.h>

int main() {
    int a[50], size, i, pos, value;

    // Step 1: Get the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Step 2: Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Get the position and value to insert
    printf("Enter the position where you want to insert the element:\n");
    scanf("%d", &pos);

    if(pos < 0 || pos > size) {
        printf("Invalid position! Please enter a position between 0 and %d\n", size);
        return 1;  // Exit the program with an error code
    }

    printf("Enter the value to insert:\n");
    scanf("%d", &value);

    // Step 4: Shift elements to the right
    for(i = size; i > pos; i--) {
        a[i] = a[i-1];
    }

    // Step 5: Insert the new element
    a[pos] = value;

    // Step 6: Increment the size of the array
    size++;

    // Step 7: Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
