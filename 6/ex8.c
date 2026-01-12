#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void sum_diff(int n1 , int n2,int *sum,int *diff);

int main(){
    int a,b,sum = 0,diff = 0;
    int *pts,*ptd;
    pts = &sum;
    ptd = &diff;
    printf("Input 2 Integers\n");
    printf("int A >> ");
    scanf("%d",&a);
    printf("int B >> ");
    scanf("%d",&b);
    sum_diff(a,b,pts,ptd);
    printf("Sum. is %d , Dif. is %d \n",sum,diff);
    return 0;
}

void sum_diff(int n1 , int n2,int *sum,int *diff){
    *sum = n1 + n2;
    *diff = abs(n1-n2);
}