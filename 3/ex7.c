#include <stdio.h>
#include <string.h>

int main(){
    char studnet_name[4][100] = {"Sato","Takahashi","Ito","Watanabe"};
    char subject_name[3][100] = {"NationalLanguage","English","Math"};
    int score[4][3] = {
        {91,63,78},
        {67,72,47},
        {89,58,53},
        {33,54,34}
    };
    float avg[4] = {0.0,0.0,0.0,0.0};
    int sum[4] = {0,0,0,0};
    int subject[3][4] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    for (int i = 0;i<4;i++){
        for (int j = 0;j<3;j++){
            subject[j][i]  = score[i][j];        //transpost    
            sum[i] += subject[i][j];
        }
    }
    for (int i = 0;i<3;i++){
        printf("%s :",subject_name[i]);
        for(int j = 0;j<4;j++){
            printf("%d ,",subject[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0;i<4;i++){
        avg[i] = (float) sum[i] / 3;
        printf("%s average score : %.2f ",studnet_name[i],avg[i]);
        printf("\n");
    }
    return 0;
}