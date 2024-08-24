#include <stdio.h>

int is_palindrome(int n) {
    int temp, remainder, sum = 0;
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (is_palindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}