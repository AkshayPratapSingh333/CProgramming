#include<stdio.h>
// declaration type/prototype we are telling compiler that we are going to create a function
void printhello(); // return type is void so that at the end we dont get return value

int main(){
    printhello(); //function call
    printhello();
    printhello();
    printhello();
    printhello();
    return 0;

}
// function definition 
void printhello(){
    printf("Hello World\n");
    printf("My name is Akshay \n");
}