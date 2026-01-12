#include <stdio.h>

int main(){
    int a = 100;
    FILE *fp;
    fp = fopen("output.txt","w+");
    if (fp != NULL){
        printf("file opened successfully \n");
        fprintf(fp,"Hello , %d \n",a);
    }else {
        printf("file open failed \n");
    }
    fclose(fp);
    return 0;
}