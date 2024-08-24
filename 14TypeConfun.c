//bool -> char -> short int -> int -> 
// unsigned int -> long -> unsigned -> 
// long long -> float -> double -> long double
#include<stdio.h>
int main(){
    int a = (int) 1.999999;
    printf("%d\n",a);
    float b = (int) 1.999999;
    printf("%f\n",b);    
 
    return 0;

}