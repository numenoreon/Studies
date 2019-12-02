#include <stack>
int solution(vector<int> &A, vector<int> &B) {
    
    class Fish{
        public:
        int size;
        bool direction;
        Fish(int s, bool d) : size(s), direction(d){}
    };
    int N = A.size();
    stack <Fish> data;
    bool alive = false;
    for (int i=0; i<N; i++)
    {
        alive=false;
        if(data.empty()) data.push(Fish(A[i],B[i]));  
        
        else if(data.top().direction==bool(B[i])){
            data.push(Fish(A[i],B[i]));
            
        }
        else if(data.top().direction==0 && B[i]==1)
        {
            data.push(Fish(A[i],B[i])); 
            
        }
        else if(data.top().direction==1 && B[i]==0)
        {
            
            //cout << A[i];
            while(!data.empty() && data.top().direction==1)
            {
                if(data.top().size<A[i]) data.pop();
                else {
                    alive=true;
                    break;
                }
            }
            if(data.empty() || !alive) data.push(Fish(A[i],B[i]));
        }
    }
    return data.size();
}