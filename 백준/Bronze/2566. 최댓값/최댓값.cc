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

    int arr[9][9];

    for(int i = 0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>arr[i][j];
        }
    }

    int max = -1;

    for(int i = 0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max<arr[i][j]){
                max =arr[i][j];
                row = i+1;
                col = j+1;
            }
        }
    }

    cout<<max<<endl;
    cout<<row<<" "<<col;

    return 0;
}
