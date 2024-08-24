#include <stdio.h>

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Option 1.\n");
            break;
        case 2:
            printf("You chose Option 2.\n");
            break;
        case 3:
            printf("You chose Option 3.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
