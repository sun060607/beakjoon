#include <stdio.h>

int main(){
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        for(int j=1;j<=num1-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
