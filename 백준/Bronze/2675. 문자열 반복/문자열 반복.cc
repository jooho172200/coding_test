#include <iostream>
#include <string>

using namespace std;

int main(){
    int t,r;
    string s;
    
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>r>>s;
        
        for(char n : s){
            for(int k=0; k<r; k++){
                cout<<n;
            }
        }
        cout<<endl;
    }
    
    return 0;
}