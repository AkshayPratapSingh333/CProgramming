#include <stdio.h>
#include <math.h>

int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int power(int n, int r) {
    int p = 1;
    for (int i = 1; i <= r; i++)
        p *= n;
    return p;
}

int is_armstrong(int n) {
    int sum = 0, temp, r, digits;
    temp = n;
    digits = count_digits(n);
    while (temp != 0) {
        r = temp % 10;
        sum += power(r, digits);
        temp = temp / 10;
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
    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}