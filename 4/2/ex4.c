#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    double radius , area , circumference ;
    printf("Please Enter radius of the circle >>");
    scanf("%lf",&radius);
    area = M_PI * pow(radius,2);
    circumference = 2 * M_PI * radius;
    printf("The circumference of a circle with radius %.2f is %.2f and the area of the circle is %.2f \n",radius,circumference,area);
    return 0;
}

//gcc -o ex4 ex4.c -lm