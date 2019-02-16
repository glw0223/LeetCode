//
// Created by gaoliwen on 2019/2/16.
//

#ifndef LEETCODE_TWOSUM_H
#define LEETCODE_TWOSUM_H
#include <iostream>

#include <vector>
#include <map>
using namespace std;
class TwoSum {
public:
    vector<int> function(vector<int>& nums, int target) {
        cout<<nums.size()<<endl;
        vector<int> ret;
        map<int,int> map;
        for (int i=0; i< nums.size();i++){
            map[nums[i]] = i;
        }
        for (int i=0; i< nums.size(); i++){
            int temp = target-nums[i];
            if(map[temp] != NULL){
                ret.push_back(i);
                ret.push_back(map[temp]);
                break;
            }
        }
        return ret;
    }
};


#endif //LEETCODE_TWOSUM_H
