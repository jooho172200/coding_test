#include <iostream>

using namespace std;


int main(){
    string dish;
    int sum = 10;
    
    cin>>dish;
    
    
    for(int i=1; i<dish.length(); i++){
        if(dish[i-1]!=dish[i]){
            sum += 10;
        }else{
            sum+=5;
        }    
    }
    
    cout<<sum;
    
    return 0;
}