#include <numeric>
#include <limits.h>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    
    int firstHalf = A[0];
    int secondHalf = accumulate(begin(A)+1, end(A),0);
    int min=INT_MAX;
    for (unsigned int i=1; i<A.size(); i++)
    {
        if(abs(secondHalf-firstHalf)<min) min= abs(secondHalf-firstHalf);
        firstHalf+=A[i];
        secondHalf-=A[i];
    }
    return min;
}