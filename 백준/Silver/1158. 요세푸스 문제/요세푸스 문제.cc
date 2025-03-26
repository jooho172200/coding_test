#include <iostream>
// #include <string>
// #include <algorithm>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int item;

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }

    cout<<'<';

    while (!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            item = q.front();
            q.push(item);
            q.pop();
        }

        cout << q.front();
        q.pop();

        
        //마지막 숫자에는 컴마를 찍지 않음
        if(!q.empty()){
        cout<<", ";
        }
    }

    cout<<'>';
}
