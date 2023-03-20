#include <stdio.h>
int main(){
    char num1[1000];
    int num2;
    scanf("%s %d",num1,&num2);
    printf("%c",num1[num2-1]);
    
    
    return 0;
}
