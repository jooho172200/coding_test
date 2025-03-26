#include <iostream>
using namespace std;

int main(){
    int num, price, money;
    int *coin;
    int cnt = 0;
    
    cin>>num>>price;
    
    coin = new int[num];
    
    for(int i=0; i<num; i++){
        cin>>money;
        coin[i] = money;
    }
    
    for(int i=num-1; i>=0; i--){
        while(price>=coin[i]){
            price-=coin[i];
            cnt++;
        }
    }
    
    cout<<cnt;
    
    delete[] coin;
    
    return 0;
}