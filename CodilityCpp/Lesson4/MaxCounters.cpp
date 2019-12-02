#include <algorithm>

vector<int> solution(int N, vector<int> &A) {

    vector <int> counter (N,0);
    int maks=0,min=0;
    for(unsigned int i=0; i<A.size(); i++)
    {
        if(A[i]>N){
            min=maks;
        }
        else{
            counter[A[i]-1]=max(counter[A[i]-1],min);
            counter[A[i]-1]++;
            if(counter[A[i]-1]>maks)
                {
                    maks=counter[A[i]-1];
                }
        }
    }
    
    for(int i=0; i<N; i++)
        counter[i]=max(counter[i],min);
    return counter;
}