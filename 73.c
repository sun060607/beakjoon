#include <stdio.h>

int main(){
    long long int num1,num2=1;
    scanf("%lld",&num1);
    for(int i=1;i<=num1;i++){
        num2 = num2*i;
    }
    printf("%lld",num2);
    
    return 0;
}
