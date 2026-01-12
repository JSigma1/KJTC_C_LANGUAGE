#include <stdio.h>

int main(){
    int random = 8;
    int number = 0;
    while (number != random){
        printf("Guess the number (1-99):");
        scanf("%d", &number);
        if (number < random){
            printf("Too low! Try again.\n");
        } else if (number > random) {
            printf("Too high! Try again.\n");
        }else {
            printf("Congratulations! You guessed the number %d correctly.\n",random);
        }
    }
    return 0;
}
