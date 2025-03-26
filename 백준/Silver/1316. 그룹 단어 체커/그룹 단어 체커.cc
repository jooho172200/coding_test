#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

int main()
{
    int count = 0;
    int num;
    bool flag;

    cin >> num;

    string str;

    for (int i = 0; i < num; i++)
    {
        bool alpha[26] = {false};

        cin >> str;

        flag = true;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] != str[j - 1] && j > 0)
            {
                if (alpha[str[j] - 'a'])
                {
                    flag = false;
                    break;
                }
            }

            alpha[str[j] - 'a'] = true;
        }

        if (flag)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
