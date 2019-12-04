#include <algorithm>
#include <limits>
#include <vector>

using namespace std;

int solution(vector<int> &A) {

    int maxSingle = *std::max_element(A.begin(), A.end()), maxSum=0;
   
    if(maxSingle<=0)
        return maxSingle;
    else
        maxSingle=0;
        
    for (unsigned int i=0; i<A.size(); i++) {
        maxSingle = std::max(0, maxSingle+A[i]);
        maxSum = std::max(maxSum, maxSingle);
    }
    
    return maxSum;
}