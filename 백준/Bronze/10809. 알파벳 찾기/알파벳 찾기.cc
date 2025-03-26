#include <iostream>

using namespace std;

int main(){
    string str;
    int arr[26];
    fill(arr,arr+26,-1);
    
    
    cin>>str;
    
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<=26; j++){
            if(str[i]=='a'+j){
                if(arr[j]==-1)arr[j]=i;
            }    
        }
    }
    
    for(int n : arr){
        cout<<n<<" ";
    }
    
    
    return 0;
}