#include <stdio.h>
int main(){
    char num[1000];
    int num1=0;
    scanf("%s",num);
    for(int i=0;i<strlen(num);i++){
        if(num[i]>=65&&num[i]<68){
            num1+=3;
        }else if(num[i]>=68&&num[i]<71){
            num1+=4;
        }else if(num[i]>=71&&num[i]<74){
            num1+=5;
        }else if(num[i]>=74&&num[i]<77){
            num1+=6;
        }else if(num[i]>=77&&num[i]<80){
            num1+=7;
        }else if(num[i]>=80&&num[i]<84){
            num1+=8;
        }else if(num[i]>=84&&num[i]<87){
            num1+=9;
        }else if(num[i]>=87&&num[i]<91){
            num1+=10;
        }
    }
    printf("%d",num1);
    return 0;
}
