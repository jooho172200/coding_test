#include <iostream>

using namespace std;


int main(){
    int day, num;
    int sum = 0;
    
    cin>>day;
    
    for(int i=0; i<5; i++){
        cin>>num;
        if(day==num) sum++;
    }
    
    cout<<sum;
    
    return 0;
}