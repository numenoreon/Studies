#include <algorithm>

int solution(vector<int> &A) {

    int N = A.size();
    int counter = 0, counter_temp=count(begin(A), end(A), 1);
    for(int i=0; i<N; i++)
    {
        if(A[i]==0)
        {
            counter+=counter_temp;
        }
        else{
            counter_temp--;
        }
        if(counter>1000000000) return -1;
    }
    return counter;
}