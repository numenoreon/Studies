#include <stack>

int solution(vector<int> &H) {

stack <int> data;
int counter=0;

for(unsigned int i=0; i<H.size(); i++)
    {
        if(data.empty()) {
            data.push(H[i]);
        }
    	else if(H[i]==data.top()){
    	    continue;
    	}
        else if(H[i]>data.top()) {
            data.push(H[i]);
        }
        else if(H[i]<data.top()){
        
            while(!data.empty() && data.top()>H[i]){
                counter++;
                data.pop();
            }
            if(data.empty() || data.top()!=H[i])
                data.push(H[i]);
        }
    }
   
while(!data.empty()){
    counter++;
    data.pop();
    }

return counter;
}
