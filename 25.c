#include <stdio.h>
int main(){
    int num1,num2,num3,num5,num4=0;
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num2;i++){
        scanf("%d %d",&num3,&num5);
        num4 = num3*num5+num4;
    }
    if(num1 == num4){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
