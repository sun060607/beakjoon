#include <stdio.h>

int main(){
    int num1,num2[100],num3,num4=0;
    scanf("%d",&num1);
    for(int i=0;i<num1;i++){
        scanf("%d",&num2[i]);
    }
    scanf("%d",&num3);
    for(int i=0;i<num1;i++){
        if(num3 == num2[i]){
            num4++;
        }
    }
    printf("%d",num4);
    return 0;
}
