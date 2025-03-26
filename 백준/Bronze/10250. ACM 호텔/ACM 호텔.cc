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
    int h, w, n;
    int floor, room, r_num;

    cin>>num;

    for (int i = 0; i < num; i++)
    {

        cin >> h >> w >> n;

        floor = n%h;
        room = n/h + 1;

        if(floor == 0){
            floor = h;
            room-=1;
        }

        r_num = floor * 100 + room;


        cout << r_num<<endl;
    }
}
