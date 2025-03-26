#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=0; j<num-i; j++){
            cout<<' ';
        }
        
        for(int j = 1; j <= 2*i -1; j++){
            cout<<'*';
        }

        cout<<endl;
    }

    for(int i=num-1; i>0; i--){
        for(int j=1; j<=num-i; j++){
            cout<<' ';
        }
        
        for(int j = 1; j <= 2*i -1; j++){
            cout<<'*';
        }

        cout<<endl;
    }
    
}
