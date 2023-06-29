#include <stdio.h>
int main(){
    int num1=0;
    char num;
    while(scanf("%c",&num)!=-1){
        if(num1==10){
            printf("\n");
            printf("%c",num);
            num1=0;
        }else{
            printf("%c",num);
        }
        num1++;
    }    
    return 0;
}
