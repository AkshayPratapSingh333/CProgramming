#include <stdio.h>

int main() {
    // Example using break
    printf("Example using break:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            printf("Breaking out of the loop at i = %d\n", i);
            break;
        }
        printf("%d ", i);
    }

    // Example using continue
    printf("\nExample using continue:\n");
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            printf("Skipping even number: %d\n", i);
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
