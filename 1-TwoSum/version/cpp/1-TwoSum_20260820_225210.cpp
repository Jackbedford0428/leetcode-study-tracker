// Last updated: 2026/8/20 下午10:52:10
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> seen;
5        for (int i = 0; i < nums.size(); i++) {
6            auto it = seen.find(nums[i]);
7            if (it != seen.end()) {
8                return {it->second, i};
9            }
10            seen[target - nums[i]] = i;
11        }
12        return {};
13    }
14};