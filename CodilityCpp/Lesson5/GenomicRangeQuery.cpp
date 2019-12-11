// we could do it checking S from P to Q and searching for lowest impact factor, but it is not optimal
// make vector with number of occurencies of each letter, then just check diffrence to get result
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) 
    // A C G T
    {
    vector <int> occurA, occurC, occurG, occurT, response;
    int counterA=0, counterC=0, counterG=0, counterT=0;
    
        
    for(auto i : S)
    {
        if(i=='A') counterA++;
        else if(i=='C') counterC++;
        else if(i=='G') counterG++;
        else counterT++;
        
        occurA.push_back(counterA);
        occurC.push_back(counterC);
        occurG.push_back(counterG);
        occurT.push_back(counterT);
        
    }
    
    int N=P.size();
    
    for (int i=0; i<N; i++)
    {
        if(occurA[Q[i]] - occurA[P[i]-1] >0) response.push_back(1);
        else if(occurC[Q[i]] - occurC[P[i]-1] >0) response.push_back(2);
        else if(occurG[Q[i]] - occurG[P[i]-1] >0) response.push_back(3);
        else if(occurT[Q[i]] - occurT[P[i]-1] >0) response.push_back(4);
    }
    return response;
}