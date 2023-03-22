#include <stdio.h>

int main(){
    int num1,num2[200][200]={0,};
    int num4;
    int num6[200][200]={0,};
    scanf("%d %d",&num1,&num4);
    for(int i=0;i<num1;i++){
        for(int j=0;j<num4;j++){
           scanf("%d",&num2[i][j]);
        }
    }
    for(int i=0;i<num1;i++){
        for(int j=0;j<num4;j++){
           scanf("%d",&num6[i][j]);
        }
    }
    for(int i=0;i<num1;i++){
        for(int j=0;j<num4;j++){
           printf("%d ",num6[i][j]+num2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
