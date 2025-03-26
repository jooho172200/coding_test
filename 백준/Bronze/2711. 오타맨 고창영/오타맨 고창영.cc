#include <iostream>

using namespace std;

int main(){
    string str;
    int x,ind;
    
    cin>>x;
    
    for(int i=0; i<x; i++){
        cin>>ind;
        cin>>str;
        
        
        for(int j=0; j<str.length(); j++){
            if(ind-1 != j){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
    
    
    
    return 0;
}