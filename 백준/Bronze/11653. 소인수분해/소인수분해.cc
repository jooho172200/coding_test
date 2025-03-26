#include <iostream>
int main(){
    int input,deno;
    
    std::cin>>input;
    
    if(input==1){
        exit(0);
    }else{
        while(input>1){ //input>0 이라 해서 오류 나온거
            for(deno=2; input%deno!=0; deno++);
            input/=deno;
            std::cout<<deno<<std::endl;
        }
    }
    
    
    return 0;
}