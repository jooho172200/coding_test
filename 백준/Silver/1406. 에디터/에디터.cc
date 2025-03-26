#include <iostream>
#include <string>
// #include <sstream>
#include <algorithm>
// #include <queue>
#include <stack>

using namespace std;

int main()
{
    int num;
    string str;
    char command;

    stack<char> l;
    stack<char> r;

    getline(cin, str);

    for (char c : str)
    {
        l.push(c);
    }

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> command;

        if (command == 'L')
        {
            if (!l.empty())
            {
                char c = l.top();
                l.pop();
                r.push(c);
            }
            continue;
        }
        else if (command == 'D')
        {
            if (r.empty())
            {
                continue;
            }

            char c = r.top();
            r.pop();
            l.push(c);
        }
        else if (command == 'B')
        {
            if (!l.empty())
            {
                char c = l.top();
                l.pop();
            }
            continue;
        }
        else if(command == 'P'){
            char ch;
            cin>>ch;

            l.push(ch);

        }
    }

    while(!l.empty()){
        r.push(l.top());
        l.pop();
    }

    while(!r.empty()){
        cout<<r.top();
        r.pop();
    }

    return 0;
}
