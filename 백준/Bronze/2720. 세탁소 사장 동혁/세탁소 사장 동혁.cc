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
    int qt,dm,nk,pn;
    int num;
    int price;

    cin>>num;

    for(int i=0; i<num; i++){
        cin>>price;

        qt = 0; dm =0; nk = 0; pn=0;

        while(price != 0 ){
            if(price >= 25){
                qt++;
                price -= 25;
            }else if(price >= 10){
                dm++;
                price -= 10;
            }else if(price >= 5){
                nk++;
                price -= 5;
            }else{
                pn++;
                price -= 1;
            }
        }

        cout<<qt<<' '<<dm<<' '<<nk<<' '<<pn<<endl;

    }


    return 0;
}
