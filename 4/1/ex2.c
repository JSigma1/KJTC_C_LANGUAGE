#include <stdio.h>
int max2(int a,int b); 


int main(){
    int n1,n2,max;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    max = max2(n1,n2);
    printf("Maximum = %d \n",max);
    return 0;

}

/**
 * @brief 
 * function that return the maximum of two integers
 * @param a integer input
 * @param b integer input
 * @return maximum of a and b
 */
int max2(int a,int b){
    int max;
    max = (a>b) ? a : b;
    return max;
}