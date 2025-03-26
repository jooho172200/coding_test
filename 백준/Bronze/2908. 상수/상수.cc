#include <iostream>
using namespace std;

int main(){
    string a1;
    string a2;
    string x,y;
    
    cin>>x>>y;
    
    int i;
    for(i=0; i<3; i++){
        a1 += x[2-i];
        a2 += y[2-i];
    }
    a1[i] = '\0';
    a2[i] = '\0';
    
    if(a1>a2) cout<<a1;
    else cout<<a2;
    
    return 0;
}