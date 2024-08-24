// C programme to read a 5x5 array of integers and then print the row sum and column sum

#include<stdio.h>
int main(){
    int a[5][5] = { {4,5,6,43,45},{9,4,7,5,4},{9,4,3,2,5},{4,5,7,8,9},{2,34,6,6,5} };
    int i,j;
    int sum = 0 ;
    printf("Row total : \n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
          sum += a[i][j];
        }
        printf("%d\n",sum);
        sum = 0; // so that it not affect others digit sum 
    }
    printf("Column total : \n");

    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
          sum += a[i][j];
        }
        printf("%d\n",sum);
        sum = 0; // so that it not affect others digit sum 
    }

    return 0;       
}