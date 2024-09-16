#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age; // declared a variable age of type int - pointer 
    // store address of age in ptr
    printf("%d\n", age);         // prints value of age (22)
    printf("%p\n", (void*)&age); // prints address of age
    printf("%d\n", *ptr);        // prints value at address stored in ptr (22)
    printf("%p\n", (void*)&ptr); // prints address of ptr itself
    printf("%d\n", *(&age));     // prints value of age (22)

    return 0;
}
