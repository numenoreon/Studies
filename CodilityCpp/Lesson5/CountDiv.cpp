// you could loop from A to B looking for %K, but its faster to subtract number of divider for each value, if A%K==0 you should add 1 to result

#include <cmath>
int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int counter = B/K - A/K;
    
    if(A%K==0) counter++;
    
    return counter;
}