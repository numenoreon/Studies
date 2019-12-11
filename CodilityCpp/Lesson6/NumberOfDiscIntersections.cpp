#include <limits>
#include <vector>
#include <algorithm>
int solution(vector<int> &A) {
    
    int N = A.size();
    vector <long> left(N);
    vector <long> right(N);
    
    for (int i=0; i<N; i++)
    {
        left[i]=long(i)-A[i];
        right[i]=long(i)+A[i];
    }
    sort(begin(left),end(left));
    sort(begin(right),end(right));
    
    int counter=0;
    
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)

        if (right[i]>=left[j]){
        counter++;
            if(counter>10000000) return -1;
        }
        else break;
        }
    return counter;
    }