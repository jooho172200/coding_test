#include <iostream>

using namespace std;


int main(){
    int x;
    string vote;
    int sumA=0, sumB=0;

    cin>>x;
    
    cin>>vote;
    
    for(int i=0; i<x; i++){
        if(vote[i]=='A')sumA++;
        else sumB++;
    }
    
    if(sumA>sumB){
        cout<<'A';
    }else if(sumA<sumB){
        cout<<'B';
    }else{
        cout<<"Tie";
    }
    
    return 0;
}