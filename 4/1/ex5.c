#include <stdio.h>
void face(int n);

int main(){
    int n ;
    printf("How many faces do you want? : ");
    scanf("%d",&n);
    face(n);
    return 0;

}
/**
 * @brief 
 * function to print n faces in a line
 * @param n integer input
 */
void face(int n){
    for (int i = 1 ; i<= n ;i++){
        printf("(^^) ");
    }
    printf("\n");
}