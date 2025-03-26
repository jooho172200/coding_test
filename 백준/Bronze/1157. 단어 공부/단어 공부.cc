#include <iostream>
#include <string>
// #include <sstream>
#include <algorithm>
// #include <queue>
// #include <stack>
#include <cctype>

using namespace std;

int main()
{
    string str;
    int letters[26] = {0};

    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    for (int i = 0; i < str.length(); i++)
    {
        letters[str[i] - 'A']++;
    }

    int max = -1;
    char result;

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] > max)
        {
            max = letters[i];
            result = 'A'+i;
        }else if(letters[i]==max){
            result = '?';
        }
    }

    cout << result;
}
