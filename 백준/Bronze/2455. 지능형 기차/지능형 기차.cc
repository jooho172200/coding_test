#include <iostream>

using namespace std;


int main(){
    int on, off;
    int num=0, mex=0;
    
    
    
    for(int i=0; i<4; i++){
        cin>>off>>on;
        num-=off;
        num+=on;
        
        if(num>mex) mex=num;
    }
    
    cout<<mex;
    
    return 0;
}