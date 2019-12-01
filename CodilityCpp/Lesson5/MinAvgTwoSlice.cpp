#include <cfloat>
#include <algorithm>

int solution(vector<int> &A) {
    
    int N=A.size(), index=0;
    float minimal=FLT_MAX, minimal_temp=FLT_MAX, temp=0;
    for (int i=0; i<N-1;i++)
    {
        temp=A[i]+A[i+1];
        minimal_temp=temp/2.0;
        if(minimal_temp<minimal) {
        	minimal=minimal_temp;
        	index=i;
        }
        
        if(i+2<N){
            temp+=A[i+2];
            minimal_temp=temp/3.0;
            if(minimal_temp<minimal) {
        	minimal=minimal_temp;
        	index=i;
        }}}
    return index;
}