#include <iostream>

using namespace std;

char score(int n){
    char s;
    
    switch(n){
        case 0:
            s = 'E';
            break;
        case 1:
            s = 'A';
            break;
        case 2:
            s = 'B';
            break;
        case 3:
            s = 'C';
            break;
        case 4:
            s = 'D';
            break;    
    }
    
    return s;
}

int main()
{   
    
    int x;
    
    for(int i=0; i<3; i++){
        int cnt = 0;
        for(int j=0; j<4; j++){
            cin>>x;
            if(x==0){
                cnt++;
            }
        }
        cout<<score(cnt)<<endl;
    }    

    return 0;
}