#include <iostream>

using namespace std;

class Player{
public:    
    int score=100;
    int dice;
};

int main()
{   
    Player p1;
    Player p2;
    
    int x;
    
    cin>>x;
    
    for(int i=0; i<x; i++){
        cin>>p1.dice>>p2.dice;
        
        if(p1.dice>p2.dice){
            p2.score -=p1.dice;
        }else if(p1.dice<p2.dice){
            p1.score -=p2.dice;
        }else{
            continue;
        }
        
    }
    
    cout<<p1.score<<endl;
    cout<<p2.score;

    return 0;
}