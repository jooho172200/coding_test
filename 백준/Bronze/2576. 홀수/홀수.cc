#include <iostream>

using namespace std;


int main(){
    int miin=101, sum=0;
    int x;
    
    for(int i=0; i<7; i++){
        cin>>x;
        if(x%2==1){
            sum+=x;
            if(x<miin) miin = x;    
        }
        
    }
    
    if(sum!=0){
        cout<<sum<<endl;
        cout<<miin;    
    }else{
        cout<<-1;
    }
    
    
    return 0;
}