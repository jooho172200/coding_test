#include <iostream>
#include <string>

using namespace std;

int main(){
    string x;
    int arr[10];
    
    cin>>x;
    
    for(int i=0; i<x.length();i++){
        arr[i] = x[i] - '0';
    }
    

    for(int k=x.length()-1; k>0; k--){
        for(int j=0; j<k; j++){
            if(arr[j]<arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                }
            }
        }
    
    for(int i=0; i<x.length();i++){
        cout<<arr[i];
    }  
    
    return 0;
}