#include <stdio.h>

int main(){
    int values[5];
    printf("Enter 5 integers :\n");
    for(int i  = 0; i<5;i++){
        printf("Enter %d interger number : ",i+1);
        scanf("%d",&values[i]);
    }
    printf("Displaying integers: \n");
    for(int i = 0;i <5;i++){
        printf("%d \n",values[i]);
    }
    return 0;
}