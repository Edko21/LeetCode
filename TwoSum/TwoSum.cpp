#include<vector>
#include <algorithm>
using namespace std;

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice
//You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> sorted;

        for (int i = 0;i < nums.size();i++) {
            pair<int, int> p(nums[i], i);
            sorted.push_back(p);
        }
        sort(sorted.begin(), sorted.end());

        vector<int> res;
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int currSum = sorted[left].first + sorted[right].first;
            if (currSum == target) {
                res.push_back(sorted[left].second);
                res.push_back(sorted[right].second);
                return res;
            }
            else if (currSum < target) {
                ++left;
            }
            else {
                --right;
            }
        }
        return res;
    }
};