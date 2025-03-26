#include <iostream>

using namespace std;

int main(){
    int num, y,k;
    int ysum=0, ksum=0;
    
    cin>>num;
    
    for(int i=0; i<num; i++){
        for(int j=0; j<9; j++){
            cin>>y>>k;
            ysum += y;
            ksum += k;
        }
        if(ysum>ksum){
            cout<<"Yonsei";
        }else if(ysum<ksum){
            cout<<"Korea";
        }else{
            cout<<"Draw";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}