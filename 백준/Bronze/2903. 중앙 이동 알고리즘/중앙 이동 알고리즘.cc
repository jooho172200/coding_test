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
    int result;
    int init = 2;

    for(int i=0; i<num; i++){
        init += pow(2,i);
    }

    result = pow(init,2);

    cout<<result;

    return 0;
}
