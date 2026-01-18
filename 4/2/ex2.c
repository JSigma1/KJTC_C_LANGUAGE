#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_lower(char a , int *lower_count);
void count_upper(char b , int *upper_count);

int main(){
    char text[30];
    printf("Input string >> ");
    scanf("%s",text);
    int lenght = 0 , lower_count = 0, upper_count = 0;
    for (int i=0;i<30;i++){
        count_lower(text[i],&lower_count);
        count_upper(text[i],&upper_count);
    }
    lenght  = strlen(text);
    printf("lenght = %d , have lower alphabet = %d , have upper alphabet = %d \n" , lenght , lower_count, upper_count);
    return 0;
}

void count_lower(char a , int *lower_count){
    if (islower(a)){
        *lower_count += 1;
    }
}

void count_upper(char b ,int *upper_count){
    if (isupper(b)){
        *upper_count += 1;
    }
}