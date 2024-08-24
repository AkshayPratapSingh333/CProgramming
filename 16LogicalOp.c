#include<stdio.h>
#include<math.h>
int main(){
    //{True = 1 , False = 0}
    //AND 
    printf("%d\n",4>3 && 5>2);//1
    printf("%d\n",4<3 && 5>2);//0
    printf("%d\n",4<3 && 5<2);//0
    //OR
    printf("%d\n",4<3 || 5>2);//1
    printf("%d\n",4<3 || 5<2);//0
    printf("%d\n",4>3 || 5.2);//1
    // Not
    printf("%d\n",!(5>2) );//0
    printf("%d\n",!(5<2) );//1
    printf("%d\n",!(4>3 && 5>2) );//0
    printf("%d\n",!(4<3 && 5>2));//1
    // Divisible by 2 or not
    int x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);
    printf("\nIf even then output  is 1 otherwise if odd then output is 0");

    return 0;

}