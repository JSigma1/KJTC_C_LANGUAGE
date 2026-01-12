#include <stdio.h>

int main(){
    char a[6] = "hello";
    for (int i = 0 ;i < 8 ;i++){
        printf("variable: %c\n",a[i]);
        printf("Variable address is : %p\n",&a[i]);
    }
    return 0;
}