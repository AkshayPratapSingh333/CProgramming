#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age; // declared a variable age of type int - pointer 
    //store address of  age in ptr
    // printf("%u",&age); address
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d",*(&age));

    return 0;
}