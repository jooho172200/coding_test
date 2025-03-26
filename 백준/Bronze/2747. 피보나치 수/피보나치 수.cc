#include <iostream>

using namespace std;


int main(){
    int x;
    int *arr;
    
    cin>>x;
    
    arr = new int[x+1];
    
    arr[0] = 0;
    arr[1] = 1;
    
    for(int i=2; i<=x; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    
    cout<<arr[x];
    
    delete[] arr;
    
    return 0;
}