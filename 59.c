#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1+num2+num3==180){
        if(num1==num2&&num2==num3){
            printf("Equilateral");
        }else if(num1==num2||num2==num3||num3==num1){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }else{
        printf("Error");
    }
    
    return 0;
}
