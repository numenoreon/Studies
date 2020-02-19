// convert string to int, add them then return as string without using built in to_str() or atoi()

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int stringToInterger(string &temp){
    
    int power=1;
    int firstInt=0;
    for(int i=temp.length()-1; i>-1; --i){
        firstInt+=power*int(temp[i]-'0');
        power*=10;
    }
    
    return firstInt;
}

string integerToString(int temp){
    stringstream ss;
    ss << temp;
    return ss.str();
}

int main()
{
    string first = "1572";
    string second = "14702";

    int firstInt=stringToInterger(first);
    int secondInt=stringToInterger(second);
    
    cout << integerToString(firstInt+secondInt);

    return 0;
}