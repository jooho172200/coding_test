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
    int n;
    string result;
    int tmp;

    cin>>n>>num;

    while(n!=0){
        tmp = n % num;

        if(tmp > 9){
            tmp = tmp-10 + 'A';
            result += tmp;
        }else{
            result += (tmp+'0');
        }

        n /= num;
    }

    reverse(result.begin(), result.end());

    cout<<result;

    return 0;
}
