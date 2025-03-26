#include <iostream>
#include <string>

using namespace std;


int main()
{
    int t,x,num,m_num;
    string name;
    
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>x;
        string* str = new string[x];
        int* arr = new int[x];
        
        int mex = arr[0];
        
        for(int j=0; j<x; j++){
            cin>>name>>num;
            str[j]=name;
            arr[j] = num;
            
            if(arr[j]>mex){
                mex = arr[j];
                m_num = j;
            }
        }
        
        cout<<str[m_num]<<endl;
        delete[] str;
        delete[] arr;
    }
    
    
    
    return 0;
}
