#include <iostream>

int main(){
    int n,m,cut;
    
    std::cin>>n>>m;
    
    cut = (m-1)+(n-1)*m;
        
    std::cout<<cut;
    
    return 0;
}