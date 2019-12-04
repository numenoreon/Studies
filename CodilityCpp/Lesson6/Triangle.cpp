#include <algorithm>
// long convertion to get 100 % corectness by avoiding integer overflow
int solution(vector<int> &A) {
    if(A.size()<3) return 0;
    sort(begin(A),end(A));
    for(int i=0; i<A.size()-2; i++)
    {
        if(long(A[i])+A[i+1]>A[i+2]) return 1;
    }
    return 0;
}