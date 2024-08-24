#include<stdio.h>
void sq(int n);
int main(){
    int num = 4;
    sq(num);
    printf("num = %d\n",num);


    return 0;
} // call by value
void sq(int n){
    n = n*n;
    printf("sq = %d\n",n);
}