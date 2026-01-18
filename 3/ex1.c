#include <stdio.h>

int main(){
    float f;
    int i;
    int count_f = 0, count_i = 0;

    for (f = 0.01;f<1;f+=0.01){
        count_f++;
    }
    for (i = 1 ; i< 100;i++){
        count_i++;
    }
    printf("float: %d int: %d\n",count_f,count_i);
    return 0;
}