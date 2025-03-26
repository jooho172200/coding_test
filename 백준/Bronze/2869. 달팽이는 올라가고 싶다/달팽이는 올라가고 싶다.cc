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
    int tree;
    int up, down;
    int day;
    int snail=0;

    cin>>up>>down>>tree;

    if(up>=tree){
        day = 1;
    }else if((tree-down)%(up - down) == 0){
        day = (tree-down)/(up - down);
    }else{
        day = (tree-down)/(up - down) + 1;
    }

    cout<<day;

    return 0;
}
