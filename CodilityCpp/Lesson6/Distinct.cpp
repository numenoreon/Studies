#include <map>

int solution(vector<int> &A) {
    map <int,int> data;
    
    for(unsigned int i=0; i<A.size(); i++)
    {
        data.insert(std::pair<int,int>(A[i],A[i]));
    }
    return data.size();
}