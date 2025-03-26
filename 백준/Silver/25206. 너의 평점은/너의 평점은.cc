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
    map<string,double> mp;

    mp["A+"] = 4.5;
    mp["A0"] = 4.0;
    mp["B+"] = 3.5;
    mp["B0"] = 3.0;
    mp["C+"] = 2.5;
    mp["C0"] = 2.0;
    mp["D+"] = 1.5;
    mp["D0"] = 1.0;
    mp["F"] = 0.0;
    mp["P"] = 0.0;

    double avg;

    double sum = 0;
    double s_count=0;
    double score;

    string subject;
    string grade;

    for(int i=0; i<20; i++){
        cin>>subject>>score>>grade;

        auto g = mp.find(grade);

        if(g->first == "P"){
            continue;
        }

        sum += score * g->second;
        s_count += score;

    }

    avg = sum/s_count;
    cout<<fixed<<setprecision(6)<<avg<<endl;

    return 0;
}
