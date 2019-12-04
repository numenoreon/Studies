#include <algorithm>
#include <stack>

int solution(vector<int> &A) {
    
    if(!A.size()) return -1;
    else if(A.size()==1) return 0;
    
    vector <int> B(A);
    sort(begin(B), end(B));
    
    int half = A.size()/2;
    int number=0;
    
    for (int i=0; i<A.size()-half; i++)
    {
        if(B[i]==B[i+half]) {
            number = B[i];
            break;
        }
    }
    
    if(number==0) return -1;
    
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==number) return i;
    }
    return -1;
}