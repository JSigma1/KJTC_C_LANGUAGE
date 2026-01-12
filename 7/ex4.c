#include <stdio.h>

int main(){
    char buff[128];
    int tall , weight , age;
    char blood;
    FILE *fp ;
    fp =fopen("ex4_data.txt","r");
    if(fp !=  NULL){
        while (fgets(buff,sizeof(buff),fp) != NULL){
            sscanf(buff,"%d %d %c %d",&tall ,&weight , &blood,&age);
            printf("Hight is %d , Weight is %d , Blood type is %c , Age is %d\n",tall , weight ,blood,age);
        }
        fclose(fp);
    }else {
        printf("file open failed \n");
    }
    return 0;
}