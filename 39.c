#include <stdio.h>

int main(){
    char num1[101];
    int num=0;
    scanf("%s",num1);
    for(int i=0;num1[i]!=NULL;i++){
        num++;
    }
    
    printf("%d",num);
    return 0;
}
