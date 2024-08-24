#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: \n");
    scanf(" %c", &ch);

    ch = tolower(ch); // Convert to lowercase for simplicity

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}