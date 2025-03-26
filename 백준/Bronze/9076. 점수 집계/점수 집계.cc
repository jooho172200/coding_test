#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num,score;
    int arr[5];
    
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        
        for(int j=0; j<5; j++){
            cin>>score;
            
            arr[j] = score;
        }
        
        sort(arr,arr+5);
        
        if(arr[3]-arr[1]>=4) cout<<"KIN"<<endl;
        else cout<<arr[1]+arr[2]+arr[3]<<endl;
        
    }
    
    
    return 0;
}