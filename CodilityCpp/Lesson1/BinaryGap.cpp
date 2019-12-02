#include <deque>
int solution(int N) {
    
    deque <int> data;
    
    while(N){
    data.push_front(N%2);
    N/=2;
    }
    
    int counter=0, maxCounter=0;
    
    for(int i=0; i<data.size(); i++)
    {
        if(data[i]==1){
            if(maxCounter<counter)
                maxCounter=counter;
            counter=0;
        }
        if(data[i]==0)
            counter++;
    }
    return maxCounter;
}