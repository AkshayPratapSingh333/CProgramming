#include <stdio.h>
int main() {
    // Function declaration
    int sum(int num1, int num2);

    int result;

    // Function call
    result = sum(5, 3);

    printf("The sum is: %d\n", result);

    return 0;
}

// Function definition
int sum(int num1, int num2) {
    return num1 + num2;
}
