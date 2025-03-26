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
    string a,b,c;

    cin>>a>>b>>c;

    cout<<stoi(a)+stoi(b)-stoi(c)<<'\n';
    cout<<stoi(a+b)-stoi(c);
}
