#include <iostream>

using namespace std;


int main(){
    int x;
    string num;
    int sum=0;
    
    cin>>x;
    
    cin>>num;
    
    for(int i=0; i<x; i++){
        sum += num[i] - '0';
    }
    
    cout<<sum;
    
    return 0;
}