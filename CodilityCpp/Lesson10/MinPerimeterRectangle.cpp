#include <limits.h>

int solution(int N) {
    
    int length=1;
    int minPerimeter=INT_MAX, tempPerimeter=0, width=N;
    
    while(length<=width){
    width=N/length;    
    if(N%length!=0){ // we are taking only integer, so check if the value is divisable
        length++;
        continue;
    }
    tempPerimeter=2*width+2*length;
    
    if(tempPerimeter<minPerimeter)
        minPerimeter=tempPerimeter;
    
    length++;    
    }
    return minPerimeter;
}
