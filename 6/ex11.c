#include <stdio.h>
#include <stdlib.h>

int compare(const void* a , const void* b){
    return (*(int*)a - *(int*)b);
}

void ave_max(int *v, int n,double *ave,int *max);

int main(){
    int n = 7,max = 0,va[n];
    double ave;
    printf("Input positive integer \n");
    for (int i = 0 ;i < 7;i++){
        printf("va[%d] = ",i);
        scanf("%d",(va + i));
    }
    ave_max(va,n,&ave,&max);
    printf("ave. is %lf, Maximum is %d \n",ave,max);
    return 0;
}

void ave_max(int *v , int n , double *ave , int *max){
    for(int i =0;i<n;i++) *ave += *(v+i);
    *ave = (double)*ave / (double) n;
    qsort(v,n,sizeof(int),compare);
    *max = *(v + n - 1);
}