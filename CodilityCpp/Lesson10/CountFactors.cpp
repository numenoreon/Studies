int solution(int N) {
    
    int counter=0;
    long i=1;
    while(i*i<N)
    {
        if(N%i==0) 
            counter+=2;
        i++;
    }
    if(i*i==N) counter++;
    return counter;
}