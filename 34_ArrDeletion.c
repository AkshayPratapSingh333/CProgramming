#include <stdio.h>

int main() {
    int a[50], size, i, pos;

    // Step 1: Get the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    // Step 2: Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Get the position 
    printf("Enter the position from where you want to delete the element:\n");
    scanf("%d", &pos);

    if(pos < 0 || pos > size) {
        printf("Invalid position! Please enter a position between 0 and %d\n", size);
        return 1;  // Exit the program with an error code
    }
    else{
        for(i=pos-1; i<size-1;i++){
            a[i] = a[i+1];
    }

    size--;
    }
    // Step 7: Print the updated array
    printf("Array after element deleted:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
