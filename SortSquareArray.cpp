//return array of sorted squared

#include <vector>
#include <map>
#include <iostream>
#include <cmath>

//using namespace std;

std::vector <int> sortedSquared(std::vector <int> &vecTemp){
   
    std::vector <int> data(vecTemp.size());
    auto itBeg=vecTemp.begin();
    auto itEnd=--vecTemp.end();
    auto itCurrent=--data.end();
    while(itCurrent>=data.begin()){
        if(abs(*itBeg)>*itEnd){
            *itCurrent = (*itBeg)*(*itBeg);    
            --itCurrent;
            ++itBeg;
        }
        else if(abs(*itBeg)<=*itEnd){
            *itCurrent = (*itEnd)*(*itEnd);    
            --itCurrent;
            --itEnd;
        }
    }
   
    return data;
}

int main()
{
    std::vector data = {-6,-3,-1,1,2,3,5};
    std::vector <int> result = sortedSquared(data);
    for(auto &i : result)
        std::cout << i << " ";
    return 0;
}