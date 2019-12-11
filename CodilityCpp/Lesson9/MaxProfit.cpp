#include <algorithm>
#include <climits>

int solution(vector<int> &A) {
    
    const int N = A.size();
    if(N<2) return 0;
    int maxSell=INT_MAX,maxProfit=0;
    
    for(int i=0; i<N; i++)
        {
            if(A[i]<maxSell)
                maxSell=A[i];
            else
                maxProfit=max(maxProfit,A[i]-maxSell);      
        }
        return maxProfit;
}