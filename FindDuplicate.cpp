// find duplicate in table, if no duplicate return -1, if more than 1 duplicate return the one which occur //second time as a first

#include <vector>
#include <map>
#include <iostream>
#include <cmath>

using namespace std;

int findDuplicateMap(std::vector<int>& nums) {
        std::map <int,int> mapping;
        for(auto &i : nums){
            mapping[i]++;
            if(mapping[i]>1)
                return i;
        }
    return -1;
    }

int findDuplicate(std::vector<int>& nums) {
    int vecSize=nums.size();
        for(int i=0; i<nums.size(); ++i){
            if(nums[vecSize-abs(nums[i])]>0)
                nums[vecSize-abs(nums[i])]*=-1;
            else
                return abs(nums[i]);
        }
       
    return -1;
    }

int main()
{
    vector temp1 = {1,3,4,2,2};
    vector temp2 = {3,1,3,4,2};
    std::cout << findDuplicate(temp1) << std::endl;
    std::cout << findDuplicate(temp2) << std::endl;
    return 0;
}
