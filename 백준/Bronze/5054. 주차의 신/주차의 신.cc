#include <iostream>

using namespace std;

int main(){
    int num,store,coor;
    int miin, mex;
    
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        mex=0;
        miin=99;
        cin>>store;
        for(int j=0; j<store; j++){
            cin>>coor;
            
            if(coor>mex) mex = coor;
            
            if(coor<miin) miin = coor;
        }
        
        cout<<(mex-miin)*2<<endl;
    }
    
    
    return 0;
}