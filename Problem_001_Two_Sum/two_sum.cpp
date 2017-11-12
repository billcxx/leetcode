#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2);
        std::unordered_map<int,int> map;
        for (int i=0;i<nums.size();i++){
            map.insert({nums[i],i});
        }
        for (int i=nums.size()-1;i>=0;i--){
            if (map.count(target-nums[i])>0 && map[target-nums[i]]!=i){
                output[0]=i;
                output[1]=map[target-nums[i]];
            }
        }
        
        
        cout << output[0] << output[1] << endl;
        return output;
    }
};