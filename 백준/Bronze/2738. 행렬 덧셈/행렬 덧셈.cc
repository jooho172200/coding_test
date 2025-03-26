#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    int row, col;

    cin >> row >> col;

    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
