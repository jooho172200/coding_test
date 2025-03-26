#include <iostream>

using namespace std;


int main(){
    int x,num,y;
    int sum;
    cin>>x;
    
    for(int i=0; i<x; i++){
        cin>>num;
        for(int j=0; j<num; j++){
            cin>>y;
            sum+=y;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}