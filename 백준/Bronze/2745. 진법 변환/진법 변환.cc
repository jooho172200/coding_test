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
    string str;
    int result = 0;

    cin>>str>>num;

    for(int i=0; i<str.length(); i++){

        int tmp = str[str.length()-(i+1)];

        if(tmp>= '0' && tmp <= '9' ){
            result += (tmp - '0') * pow(num, i);
        }else{
            result += (tmp - 'A' + 10) * pow(num, i);
        }

    }

    cout<<result;

    return 0;
}
