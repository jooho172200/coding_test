#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int a,b,c;
    stringstream ss;
    int arr[10] = {};
    
    
    cin>>a>>b>>c;
    
    ss<<a*b*c;
    
    string str = ss.str();
    
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<=9; j++){
            if(str[i]==(j+'0')) arr[j]++;
        }
    }
    
    for(int n : arr){
        cout<<n<<endl;
    }
    
    
    return 0;
}