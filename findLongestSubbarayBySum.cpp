#include <iostream>
#include <vector>
#include <algorithm>

// find the longest subarray in array which sum of elements is equal to pointed sum

std::vector <int> data {1,2,3,4,5,0,0,0,6,7,8,9,10};

int bruteForce(std::vector <int> &vec, int sum){ // complexity O(n*n)
    
    
    int tempLongest=0, globalLongest=0, tempSum=0;
    
    for(int i=0; i<vec.size()-1; ++i){
        tempLongest=0, tempSum=vec[i];
        for(int j=i+1; j<vec.size(); ++j){
            tempSum+=vec[j];
            if(tempSum==sum){
                tempLongest=j-i+1;
                globalLongest=std::max(globalLongest,tempLongest);
            }
        }    
    }
    
    return globalLongest;
}

int linearSolution(std::vector <int> &vec, int sum){ // complexity O(2*n)
    int i=0, j=0;
    int tempLongest=0, globalLongest=0, tempSum=0;
    
    while(j < vec.size() && i < vec.size()){
        //std::cout << tempSum << " ";
        if(tempSum<sum){
            tempSum+=vec[j++];    
        }
        else if(tempSum>sum){
            tempSum-=vec[i++];
        }
        else if(tempSum==sum){
            tempLongest=j-i;
            tempSum+=vec[j++]; 
            globalLongest=std::max(globalLongest,tempLongest);
        }
    }
    
    return globalLongest;
}

int main(){
    //std::cout << bruteForce(data, 15);
    std::cout << linearSolution(data, 15);
}