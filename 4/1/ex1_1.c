#include <stdio.h>

int addnumbers(int a , int b){ //function definition
    int result ;
    result = a+b;
    return result; //return statement
}

int main(){
    int n1, n2 ,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1 , &n2);
    sum = addnumbers(n1 , n2); //function call
    printf("Sum = %d",sum);
    return 0;
}