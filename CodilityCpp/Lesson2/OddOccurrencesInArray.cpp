#include <algorithm>

int solution(vector<int> &A) {
    
    if(A.empty()) return 1;
    sort(begin(A),end(A));
    
    for (int i=0; i<A.size(); i=i+2)
    {
        if(A[i]!=A[i+1]) return A[i];
    }
    
}