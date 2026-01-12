#include <stdio.h>

int main(){
    int a[9] = {2,6,8,10,13,217,21,22,27};
    printf("Array elements are tripled and output from the right \n");
    printf("Array a:");
    for(int i = 8;i>=0;i--){
        printf("%d,",*(a+i) * 3);
    }
    printf("\n");
    return 0;
}