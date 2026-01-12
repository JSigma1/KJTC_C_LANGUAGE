#include <stdio.h>

int main(){
    int i = 1;
    do {
        if (i % 2 ==0){
            i++;
            continue;
        }
        printf("%d \n",i);
        // if(i == 5){
        //     break;
        // }
        i++;

    }while(i <= 10);
    return 0;
}