#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt","r");
    if (fp != NULL){
        printf("file opened successfully \n");
        fclose(fp);
    }else {
        printf("file open failed \n");
    }
    return 0;
}