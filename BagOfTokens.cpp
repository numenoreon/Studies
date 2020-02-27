class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(),tokens.end());
        int maxPoints =0;
        int tempPoints=0;
        int i=0, j=tokens.size()-1;
        
        while(i<=j){
            if(tokens[i]<=P){
                ++tempPoints;
                P-=tokens[i++];
                maxPoints=max(maxPoints,tempPoints);
            }
            else if(tempPoints>0){
                --tempPoints;
                P+=tokens[j--];
            }
            else{
                break;
            }
        }
        return maxPoints;
    }
};