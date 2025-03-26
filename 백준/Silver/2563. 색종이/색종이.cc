#include <iostream>
/*#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>
#include <map>
#include <iomanip>*/

using namespace std;

int main()
{
    int x, y;
    int num;
    int area = 0;

    int arr[101][101] = {0};


    cin>> num;

    for(int i=0; i<num; i++){
        cin>>x>>y;

        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                if(arr[j][k] == 0){
                    arr[j][k] = 1;
                    area++;
                }
            }
        }
    }

    
    cout<<area;

    return 0;
}
