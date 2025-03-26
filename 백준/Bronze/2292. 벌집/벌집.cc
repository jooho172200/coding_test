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
   
    int result = 1;
    int count = 1;

    for(int i=0; result<num; i++){
        result += 6*(i+1);
        count++;
    }

    cout<<count;

    return 0;
}
