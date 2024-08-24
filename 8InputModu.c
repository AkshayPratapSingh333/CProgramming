#include<stdio.h>
int main(){
    //Find the remainder by modulus operator
    int a,b; //x>y
    printf("Enter the dividend number :\n");
    scanf("%d",&a);
    printf("Enter the divisor number :\n");
    int y;
    scanf("%d",&b);
    // int q = a/b;
    // int r = a - b*q;// divisor * quotient + remainder = dividend
    int r = a % b;
    printf("The Remainder when %d is divided by %d is :%d",a,b,r);



    return 0;
}