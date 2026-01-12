#include <stdio.h>

int main(){
    int number[3] = {};
    int sum = 0;
    printf("Enter three integers: ");
    scanf("%d %d %d", &number[0], &number[1], &number[2]);
    for (int i=0; i<(sizeof(number)/sizeof(number[0]));i++){
        if (number[i] < 0){
            continue;
        }
        sum += number[i];
    }
    printf("Sum of positive integers = %d \n",sum);
    return 0;
}