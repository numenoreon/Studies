#include <map>

using namespace std;

int solution(int X, vector<int> &A) {
    
    map <int, int> data;
    for(unsigned int i=0; i<A.size(); i++)
    {
        data.insert(pair<int,int>(A[i],i));
        if(data.size()==unsigned (X)) return i;
    }
    return -1;
}