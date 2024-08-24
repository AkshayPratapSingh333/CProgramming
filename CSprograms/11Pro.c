#include <stdio.h>

int main() {
    char character;
    
    // Prompt the user to enter a character
    printf("Enter a character: \n");
    scanf("%c", &character);
    
    // Check if the entered character is uppercase
    if (character >= 'A' && character <= 'Z') {
        // Convert uppercase to lowercase by adding 32
        character += 32;
    }
    // Check if the entered character is lowercase
    else if (character >= 'a' && character <= 'z') {
        // Convert lowercase to uppercase by subtracting 32
        character -= 32;
    }
    else {
        printf("Invalid input! Please enter an alphabetic character.\n");
        return 1; // Exit with error
    }
    
    printf("The character in the opposite case is: %c\n", character);
    
    return 0;
}
