#include <stdio.h>

int main(){
    int hkouza = 5000;
    int *pt ;
    pt = &hkouza;
    printf("Before transfer \n");
    printf("Account at hakodate Bank: %d\n",hkouza);
    *pt = *pt + 10000;
    printf("After transfer \n");
    printf("Account at Hakodate Bank: %d\n",hkouza);
    return 0;
}