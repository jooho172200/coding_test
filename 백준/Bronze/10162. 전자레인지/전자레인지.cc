#include <iostream>

using namespace std;


int main(){   
    int sec;
    int a=0, b=0, c=0;
    
    cin>>sec;
    
    while(sec>=300){
        sec-=300;
        a++;
    }
    while(sec>=60){
        sec-=60;
        b++;
    }
    while(sec>=10){
        sec-=10;
        c++;
    }
    
    if(sec!=0){
        cout<<-1;
    }else{
        cout<<a<<" "<<b<<" "<<c;
    }
    
    return 0;
}