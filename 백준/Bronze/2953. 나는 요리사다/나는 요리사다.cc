#include <iostream>

using namespace std;

class cook{
public:    
    static int cnt;
    cook(): id(cnt++){}
    int id;
    int score=0;;
};

int cook::cnt = 1;

int main(){
    cook ck[5];
    cook mex = ck[0];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            int x;
            cin>>x;
            ck[i].score += x;
        }
        
        if(ck[i].score>mex.score){
            mex = ck[i];
        }
    }
    
    cout<<mex.id<<" "<<mex.score;
    
    return 0;
}