#include <iostream>
#include <ctime>

int main(){
    time_t curr_time = time(NULL);
    struct tm* c = localtime(&curr_time);

    printf("%d-%02d-%02d\n", c->tm_year+1900, c->tm_mon+1, c->tm_mday);
    
    return 0;
}