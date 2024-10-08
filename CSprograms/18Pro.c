#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms in Fibonacci series: \n");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}
