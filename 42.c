#include <stdio.h>

int main(){
    int num1,num3=0;
    char num2[10001];
    scanf("%d",&num1);
    scanf("%s",num2);
    for(int i=0;i<num1;i++){
        num3 = (num2[i]-48)+num3;
    }
    printf("%d",num3);
    return 0;
}
