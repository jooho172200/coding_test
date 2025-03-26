#include <iostream>

using namespace std;

int main(){
    string str;
    int arr[26] = {0};
    
    cin>>str;
    
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<=26; j++){
            if(str[i]=='a'+j) arr[j]++;
        }
    }
    
    for(int n : arr){
        cout<<n<<" ";
    }
    
    
    return 0;
}