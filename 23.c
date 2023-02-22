#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        scanf("%d %d",&num2,&num3);
        printf("%d\n",num2+num3);
    }
    return 0;
}
