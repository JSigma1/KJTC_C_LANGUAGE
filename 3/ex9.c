#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        printf("element -%d :",i);
        scanf("%d",&arr[i]);
    }
    int max = 0;int min = arr[0];
    for (int i =0;i<n;i++){
        if (arr[i] > max){
            max = arr[i];
        }else if (min > arr[i]){
            min = arr[i];
        }
    }
    printf("Minimun element : %d \n Maximun element : %d \n",min,max);
    return 0;
}