#include <iostream>

using namespace std;

class Score{
public:
    int score;
    int id;
};

int main(){
    Score* arr = new Score[8];
    
    int x;
    int sum=0;
    int num[5];
    
    for(int i=0; i<8; i++){
        cin>>arr[i].score;
        arr[i].id = i+1;
    }

    for(int k=8; k>0; k--){
        for(int j=0; j<k; j++){
            if(arr[j].score<arr[j+1].score){
                Score tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                }
            }
        }
    
    for(int i=0; i<5; i++){
        sum+=arr[i].score;
    }        
    
    for(int k=5; k>0; k--){
        for(int j=0; j<k-1; j++){
            if(arr[j].id>arr[j+1].id){
                int ttmp = arr[j].id;
                arr[j].id = arr[j+1].id;
                arr[j+1].id = ttmp;
                }
            }
        }
        
    
    cout<<sum<<endl;
    
    for(int i=0; i<5; i++){
        cout<<arr[i].id<<" ";
    } 
    
    return 0;
}