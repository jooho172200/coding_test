#include <iostream>
#include <string>
#include <sstream>
// #include <algorithm>
// #include <queue>
// #include <stack>

using namespace std;


int main()
{
    int count = 0;

    string str;
    
    getline(cin, str);

    stringstream ss(str);

    while(ss>>str){
        count++;
    }

    cout<<count;

    return 0;
}
