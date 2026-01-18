#include <stdio.h>

int main(){
    int seiseki[5] = {54,94,80,75,66};
    float avg = 0;
    int max = 0,sum = 0;
    for (int i = 0 ;i<5;i++){
        sum  += seiseki[i];
        if (seiseki[i] > max){
            max = seiseki[i];
        }
    }
    avg = (float) sum/5;
    printf("max = %d , avg = %.2f\n",max,avg);
    return 0;
}