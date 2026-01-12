#include <stdio.h>

int main(){
    int iData;
    char cData;
    double dData;
    printf("Address of iData : %p \n",&iData);
    printf("Address of cData : %p \n",&cData);
    printf("Address of dData : %p \n",&dData);
    printf("----------\n");
    int *p;
    p = &iData;
    printf("Address of iData -> %p \n",p);
    return 0;
}