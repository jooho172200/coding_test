#include <iostream>

using namespace std;


int main(){
    int x, num;
    int score = 0;
    int *arr;
    
    cin>>x;
    arr = new int[x];
    
    for(int i=0; i<x; i++){
        cin>>num;
        arr[i] = num;
    }
    
    if(arr[0]==1)score++;
    
    int cnt=1;
    for(int i=1; i<x; i++){
        if(arr[i]==1){
            if(arr[i-1]==1) cnt++;
            score+=cnt;
        }else{
            cnt=1;
        }
    }
    
    cout<<score;
    
    delete[] arr;
    
    return 0;
}