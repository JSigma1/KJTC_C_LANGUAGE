#include <stdio.h>
int is_odd();

int main(){
    if (is_odd()){
        printf("Odd \n");
    }else {
        printf("Even \n");
    }
    return 0;
}

/**
 * @brief
 * function to check number is odd or not
 * @param n integer input 
 * @return 1 if n is odd, 0 if not
 */
int is_odd(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return (n % 2) ? 1 :0 ;
}