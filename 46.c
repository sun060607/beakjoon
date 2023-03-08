#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    num1 = num1/100+(num1%10)*100+((num1/10)%10)*10;
    num2 = num2/100+(num2%10)*100+((num2/10)%10)*10;
    if(num1>num2){
        printf("%d",num1);
    }else{
        printf("%d",num2);
    }
    return 0;
}
