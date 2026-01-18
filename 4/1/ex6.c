#include <stdio.h>
int scan_print();
void print_abc(int n);

int main(){
    int n = scan_print();
    if (n <= 0){
        printf("incorrect \n");
    }else {
        print_abc(n);
    }
    return 0;
}
/** 
 * @brief
 * function to scan a positive integer from user and return it
 * @return integer input 
*/
int scan_print(){
    int n ;
    printf("Input positive integer>>");
    scanf("%d",&n);
    return n;
}
/**
 * @brief 
 * function to print A if n is divide by 3 is 0 , B if 1, C if 2
 * @param n positive integer input
 */
void print_abc(int n){
    int dv_three = n % 3;
    switch(dv_three){
        case 0:
            printf("A \n");
            break;
        case 1:
            printf("B \n");
            break;
        case 2:
            printf("C \n");
            break;
        default:
            printf("incorrect \n");
            break;
        }
}
