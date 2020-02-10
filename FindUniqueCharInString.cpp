// find unique character in string, if no unique char - return '_', if there is more than 1 unique char return //the one which occur first in string O(2n)

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

char uniqueChar(std::string &data){
    
    std::array <int, 26> charOccurence;
    std::fill(std::begin(charOccurence), std::end(charOccurence), 0);
    
    for(auto &i: data)
        ++charOccurence[int(i)-97];
    
    //for(int i=0; i<26; ++i)
    //    std::cout << charOccurence[i] << " ";
    
    for(auto &i: data)
        if(charOccurence[int(i)-97]==1)
            return i;
    
    return '_';
}

int main()
{
    std::string ourString="aaabcccdeeef";
    std::cout << uniqueChar(ourString);
    return 0;
}
