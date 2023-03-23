#include <stdio.h>

int main(){
    int num1[10][10];
    int num2=0,num3=0,num4=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&num1[i][j]);
            if(num2<=num1[i][j]){
                num2 = num1[i][j];
                num3=i+1;
                num4=j+1;
            }
        }
    }
    printf("%d \n",num2);
    printf("%d %d",num3,num4);
    
    return 0;
}
