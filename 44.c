#include <stdio.h>
#include <string.h>
int main(){
    int num1,num2;
    char num[1001];
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        scanf("%d %s",&num2,num);
        for(int i=0;i<strlen(num);i++){
            for(int j=1;j<=num2;j++){
                printf("%c",num[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
