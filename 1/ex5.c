#include <stdio.h>

int main(){
    double height, base;
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    double area = 0.5 * height * base;
    printf("The area of the triangle is: %lf\n", area);
    return 0;
}