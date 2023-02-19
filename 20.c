#include <stdio.h>
int main(){
    int num1,num2,num3,num4,num5;
    scanf("%d %d",&num1,&num2);
    scanf("%d",&num3);
    num4 = (num2+num3)/60;
    num5 = (num2+num3)%60;
    num1 = num4 + num1;
    if(num1 >= 24){
        num1 = num1-24;
    }
    printf("%d %d",num1,num5);
    return 0;
}
