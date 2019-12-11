#include <stack>

int solution(string &S) {

    stack <char> data;
    int N=S.length();
    if(N%2) return 0; //
    
    for(int i=0; i<N; i++)
    {
        switch(S[i])
        {
            case'{':
                data.push(S[i]);
                break;
            case'(':
                data.push(S[i]);
                break;
            case'[':
                data.push(S[i]);
                break;
            case'}':
                if(data.top()!= '{') return 0;
                data.pop();
                break;
            case']':
                if(data.top()!= '[') return 0;
                data.pop();
                break;
            case')':
                if(data.top()!= '(') return 0;
                data.pop();
                break;
    	}
    }
    return data.empty() ? 1 : 0;
}