#include <iostream>

using namespace std;


int main(){
    int r,e,c,num;
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        cin>>r>>e>>c;
        
        if(e-c<r){
            cout<<"do not advertise"<<endl;
        }else if(e-c>r){
            cout<<"advertise"<<endl;
        }else{
            cout<<"does not matter"<<endl;
        }    
    }
    
    return 0;
}