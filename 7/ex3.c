#include <stdio.h>

int main(){
    char str[1024];
    int a;
    FILE *fp;
    fp = fopen("output.txt","r");
    if (fp != NULL){
        printf("file opened successfully \n");
    }else {
        printf("file open failed \n");
    }
    fscanf(fp,"%s%d",str,&a);
    fclose(fp);
    printf("%s\n",str);
    printf("%d\n",a);
    return 0;

}