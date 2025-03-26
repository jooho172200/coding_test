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
    int letter[26] {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

    string str;

    cin >> str;

    for(int i=0; i<str.length(); i++){
        count += letter[str[i] - 'A'];
    }

    cout<<count;

    return 0;
}

