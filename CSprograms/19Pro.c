#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary equivalent: \n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;

    printf("Enter a decimal number: \n");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);

    return 0;
}