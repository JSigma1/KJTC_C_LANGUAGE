#include <stdio.h>

int main() {
    int A;
    char c;

    while (1) {
        printf("Enter a number: ");

        if (scanf("%d", &A) == 1) {
            int res = A % 5;
            if (res < 0) res += 5;

            if (res == 0) printf("Super Lucky\n");
            else if (res == 1) printf("Lucky\n");
            else if (res == 2) printf("Normal\n");
            else if (res == 3) printf("Bad\n");
            else if (res == 4) printf("Very Bad\n");
        } 
        else {
            scanf(" %c", &c); 

            if (c == '*') {
                break;
            } else {
                printf("error message\n");
            }
        }
    }
    return 0;
}