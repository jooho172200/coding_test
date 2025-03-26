#include <iostream>
using namespace std;

int main(){
    int *arr;
    int x, num;
    int sum = 0;
    
    cin>>x;
    
    arr = new int[x];
    
    int i=0;
    int cnt =0;
    
    while(cnt<x){
        cin>>num;
        
        
        
        if(num==0){
            if(i==0) arr[0] = 0;
            else{
                i--;
                arr[i] = 0;
            } 
            
        }else{
            arr[i] = num;
            i++;
        }
        
        cnt++;
    }
    
    for(int i=0; i<x; i++){
        sum+=arr[i];
    }
    
    cout<<sum;
    
    delete[] arr;
    
    return 0;
}