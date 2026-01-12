#include <stdio.h>

int main(){
    int ans, no;
    ans  = 7;
    printf("Please enter an integer ( 0 - 20 ) : ");
    scanf("%d",&no);
    if (no > ans){
        printf("Large \n");
    } else if (no < ans){
        printf("Small \n");
    } else {
        printf("Correct \n");
    }
    return 0;
}