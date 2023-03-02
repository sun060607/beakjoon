#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3[1000001];
    int num4;
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&num3[i]);
    }
    num2 = num3[0];
    num4 = num3[0];
    for(int i=1;i<num1;i++){
        if(num3[i]<num4){
            num4 = num3[i];
        }
        if(num3[i]>num2){
            num2 = num3[i];
        }
    }
    printf("%d %d",num4,num2);
    return 0;
}
