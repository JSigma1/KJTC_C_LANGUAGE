#include <stdio.h>

int main(){
    int a = 100;
    int b = 100;
    if (&a == &b){
        printf("Same as \n");
    }else {
        printf("Not \n");
    }
    return 0;
}

//It will return Not because even value is 
//same but address that store vaule is not same 
//one address can store data one at a time