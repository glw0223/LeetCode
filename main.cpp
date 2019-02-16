#include <iostream>

#include "TwoSum.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(9);
    TwoSum twoSum;
    vector<int> result = twoSum.function(vec,10);
    if(!result.empty()){
        cout << result[0] << "," << result[1] << endl;
    } else{
        cout << "no result" << endl;
    }

    return 0;
}