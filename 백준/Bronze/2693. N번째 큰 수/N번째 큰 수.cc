#include <iostream>
using namespace std;

int main(){
    int num;
    int arr[10];
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        for(int j=0; j<10; j++){
            cin>>arr[j];
        }
        
        for(int k=9; k>=0; k--){
            for(int j=1; j<=k; j++){
                if(arr[j-1]<arr[j]){
                    int tmp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        
        
        cout<<arr[2]<<endl;
        
    }
    
    
    
    return 0;
}