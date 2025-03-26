#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int num;
    string str;

    stack<int> st;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> str;

        if (str == "push")
        {
            int val;
            cin >> val;

            st.push(val);
        }
        else if (str == "pop")
        {
            if(st.size()!=0){
                cout << st.top() << endl;
                st.pop();
            }else{
                cout<< -1 <<endl;
            }
        }
        else if (str == "top")
        {
            if(st.size()!=0){
                cout << st.top() << endl;
            }else{
                cout<< -1 <<endl;
            }
            
        }
        else if (str == "size")
        {
            cout << st.size() << endl;
        }
        else if (str == "empty")
        {
            cout<<st.empty()<<endl;
        }
    }

    return 0;
}
