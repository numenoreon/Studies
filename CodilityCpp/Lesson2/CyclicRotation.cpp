vector<int> solution(vector<int> &A, int K) {
    
    if(A.empty()) return A;
    int N=A.size();
    K=K%N;
    
    int temp=0;
    for(int i=0; i<K; i++)
    {
        temp=A[N-1];
        for(int j=N-1; j>=1;j--)
        {
            A[j]=A[j-1];
        }
        A[0]=temp;
    }
    
    return A;
}