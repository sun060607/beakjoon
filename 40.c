#include <stdio.h>

int main(){
    int num1,num2=0;
    char num[101];
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        scanf("%s",num);
        num2 = strlen(num);
        printf("%c%c\n",num[0],num[num2-1]);
    }
    
    return 0;
}
