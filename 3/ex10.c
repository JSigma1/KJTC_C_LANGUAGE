#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b) {
  	return *(int*)a - *(int*)b;
}

int main(){
    int n = 0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        printf("element -%d :",i);
        scanf("%d",&arr[i]);
    }

    qsort(arr, n, sizeof(int), comp);
    printf("Element of array in ascending sort order :");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}