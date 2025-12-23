// Last updated: 2025/12/23 下午3:07:53
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(const vector<int>& nums) {
4        unordered_set<int> seen(nums.begin(), nums.end());
5        vector<int> ans;
6        ans.reserve(nums.size());
7        for (int i = 1; i <= static_cast<int>(nums.size()); ++i) {
8            if (!seen.count(i)) {
9                ans.push_back(i);
10            }
11        }
12        return ans;
13    }
14};