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
    int arr[8];
    int asc = 0, desc = 0;

    for(int i=0; i<8; i++){
        cin>>arr[i];
    }

    for(int i=0; i<4; i++){
        if(arr[i] == i+1 && arr[i]+arr[7-i] == 9){
            asc++;
        }else if(arr[i] == 8-i && arr[i]+arr[7-i] == 9){
            desc++;
        }
    }

    if(asc == 4){
        cout<<"ascending";
    }else if(desc == 4){
        cout<<"descending";
    }else{
        cout<<"mixed";
    }
}
