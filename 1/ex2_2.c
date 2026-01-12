#include <stdio.h>

int main(){
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f",&num1);
    printf("Enter another number: ");
    scanf("%lf",&num2);
    printf("num1 = %f \nnum2 = %lf \n",num1,num2);
    return 0;
}