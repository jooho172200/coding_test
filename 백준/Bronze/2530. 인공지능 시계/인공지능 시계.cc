#include <iostream>

int main(){
    int h,m,s,sec;
    
    std::cin>>h>>m>>s>>sec;
    
    s += sec;
    
    while(s>59){
        s-=60;
        m++;
    }
    
    while(m>59){
        m-=60;
        h++;
    }
    
    while(h>23){
        h-=24;
    }
    
    printf("%d %d %d",h,m,s);
    
    return 0;
}