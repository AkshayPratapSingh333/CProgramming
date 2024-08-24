#include<stdio.h>
int main(){
    //calculate simple interest
    float p,r,t,si; // 4 container have been created 
    p=1000;
    r=10;
    t=5;
    si=(p*r*t)/100;
    printf("%f\n",si);
    return 0;

}