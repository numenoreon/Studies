#include <algorithm>

int solution(vector<int> &A) {

    sort(begin(A), end(A));
    int N=A.size();
    return A[N-1]*A[N-2]*A[N-3] > A[N-1]*A[0]*A[1] ? A[N-1]*A[N-2]*A[N-3] : A[N-1]*A[0]*A[1];
}