#include <stdio.h>

int main(){
    int num1,num2,num3=1,num4=0;
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            if(num2 == num3){
                printf("%d",i);
                num4 = 1;
            }
            num3+=1;
        }
    }
    if(num4 ==0){
      printf("%d",num4);
    }
    return 0;
}
  
