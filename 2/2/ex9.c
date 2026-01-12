#include <stdio.h>

int main(){
    char variable ;
    printf("Enter a character: ");
    scanf("%c",&variable);
    switch (variable % 5)
    {
    case 0:
        printf("Super Lucky \n");
        break;
    case 1:
        printf("Lucky \n");
        break;
    case 2:
        printf("Normal \n");
        break;
    case 3:
        printf("Bad \n");
        break;
    case 4:
        printf("Very Bad \n");
        break;
    default:
        printf("Error \n");
        break;
    }
    return 0;
}