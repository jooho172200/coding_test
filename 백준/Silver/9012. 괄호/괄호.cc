#include <iostream>
#include <string>
//#include <sstream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int num;
    string str;
    bool flag;

    

    cin >> num;
    cin.ignore(); // num 입력후 공백 무시

    for (int i = 0; i < num; i++)
    {
        stack<char> st; // 스택을 입력마다 초기화 하지 않아 오류 발생
        flag = true;

        getline(cin, str);
        
        for(int i=0; i<str.size(); i++){
            if(str[i] == '('){
                st.push(str[i]);
            }else{
                if(st.empty()){
                    flag = false;
                    break;
                }else{
                    st.pop();
                }
                
            }
        }

        string result = (flag == true && st.empty())? "YES" : "NO";
        cout<<result<<endl;
    }

    return 0;
}
