#include<stdio.h>
// declaration type/prototype we are telling compiler that we are going to create a function
void printhello(); // return type is void so that at the end we dont get return value
void goodbye();
int main(){
    printhello(); //function call
    goodbye();
    goodbye();
    return 0;

}
// function definition 
void printhello(){
    printf("Hello World\n");
    printf("Hello AI\n");
    
}

void goodbye(){
    printf("GoodBye\n");
    printf("Akshay\n");
}
