#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;
    int suma, sumb;
    int arr[10];

    for(int i=0; i<10; i++){
        cin>>a;
        arr[i] = a;
    }
    
    sort(arr, arr+10);
    
    suma = arr[7]+arr[8]+arr[9];
    
    for(int i=0; i<10; i++){
        cin>>a;
        arr[i] = a;
    }
    sort(arr, arr+10);
    sumb = arr[7]+arr[8]+arr[9];
    
    cout<<suma<<" "<<sumb;
    
    return 0;
}