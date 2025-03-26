#include <iostream>

using namespace std;


int main(){
    string str;
    
    cin>>str;
    
    char *arr;
    arr = new char[str.length()+1];
    
    int i;
    for(i=0; i<str.length(); i++){
        arr[i] = str[str.length()-1-i];
    }
    arr[i] = '\0';
    
    int j;
    for(j=0; j<str.length(); j++){
        if(arr[j]!=str[j])break;
    }
    
    if(arr[j]=='\0'){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}