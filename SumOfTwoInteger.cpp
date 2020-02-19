/*
You have two integer arrays, a and b, and integer target value v. Determine whether there is a paitr of numbers ,where one number is taken from a and the other from b,
that can be added together to get a sum of v. Return true if such a pair exists, otherwise return false.

*/

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector <int> a{ 0, 0, -5 , 30212 };
std::vector <int> b{ -10,40,-3,9 };
int target = -8;

bool bruteForce(std::vector <int>& x, std::vector <int> y, int& z) { // O(N*N) time complexity
    for (auto& i : x)
        for (auto& j : y)
            if (i + j == z)
                return true;
    return false;
}

bool usingMemory(std::vector <int>& x, std::vector <int> y, int& z) { // O(N + M) time complexity
    std::unordered_set <int> compositieValue;

    for (auto& i : x)
        compositieValue.insert(z - i);

    for (auto& i : y) 
        if (compositieValue.count(i))
            return true;

        return false;
}

int main()
{       
    std::cout << std::boolalpha << bruteForce(a, b, target) << "\n";
    std::cout << std::boolalpha << usingMemory(a, b, target);
    return 0;
}
