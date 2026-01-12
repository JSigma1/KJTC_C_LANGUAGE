#include <stdio.h>
#include <ctype.h>

int main(){
    char ch[20];
    char changed_ch[20];
    printf("input alphabetic strings >>");
    scanf("%s",ch);
    for (int i =  0; i < 20 ; i++){
        if (ch[i] == tolower(ch[i])){
            changed_ch[i] = toupper(ch[i]);
        }else {
            changed_ch[i] = tolower(ch[i]);
        }
    }
    printf("transfer  results are \n");
    printf("%s \n",changed_ch);
    return 0;
}