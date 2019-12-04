#include <algorithm>

int solution(vector<int> &A) {
    
    const int N=A.size();
    if(N<4) return 0;
    
    int maxEnd[N];
    int maxStart[N];
    
    maxEnd[0]=maxEnd[N-1]=0;
    maxStart[0]=maxStart[N-1]=0;
    
    for(int i=1; i<N-1; i++)
    {
        maxEnd[i]=max(0,maxEnd[i-1]+A[i]);
        maxStart[N-1-i]=max(0,maxStart[N-i]+A[N-1-i]);
    }
    
    int maxResult=0;
    
    for(int i=1;i<N-1;i++){
        maxResult=max(maxResult,maxEnd[i-1]+maxStart[i+1]);
    }
    
    return maxResult;
}