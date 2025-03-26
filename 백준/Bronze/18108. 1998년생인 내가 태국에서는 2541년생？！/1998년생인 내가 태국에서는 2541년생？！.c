#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int seogi;
    int bulgi;
    
    scanf("%d",&bulgi);
    
    if(bulgi>=1000 && bulgi<=3000){
        seogi = bulgi - 543;
    
        printf("%d",seogi);
    }    
    
    return 0;
}
