#include <iostream>

using namespace std;


int main(){   
    int price,num,mon;
    
    cin>>price>>num>>mon;
    
    
    if(price*num>mon){
        cout<<price*num-mon;
    }else{
        cout<<0;
    }

    return 0;
}