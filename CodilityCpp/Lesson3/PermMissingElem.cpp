#include <algorithm>

int solution(vector<int> &A) {
    
    if(A.empty()) return 1;
    sort(begin(A),end(A));
    
    if(A[0]!=1) return 1;
    if(A[A.size()-1]!=A.size()+1) return A.size()+1;
    
    for(unsigned int i=1; i<A.size(); i++)
    {
        if(A[i]!=i+1) return i+1;
    }   
}