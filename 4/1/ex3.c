#include <stdio.h>
void create_star(int n);

int main(){
    int n ;
    printf("How many stars do you want? : ");
    scanf("%d",&n);
    create_star(n);
    return 0;

}
/**
 * @brief 
 * function to print n starts in a line
 * @param n integer input
 */
void create_star(int n){
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}