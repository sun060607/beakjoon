#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>0){
        if(num2>0) printf("1");
        else printf("4");
    }else{
        if(num2>0) printf("2");
        else printf("3");
    }
    
    return 0;
}
