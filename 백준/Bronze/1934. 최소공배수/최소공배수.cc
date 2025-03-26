#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int num,a,b;
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        cin>>a>>b;
        
        
        cout<<a*b/gcd(a,b)<<endl;
        
    }
    
    return 0;
}