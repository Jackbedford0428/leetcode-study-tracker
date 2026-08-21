// Last updated: 2026/8/21 下午11:57:48
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans(nums.size() * 2);
5        copy(nums.begin(), nums.end(), ans.begin());
6        copy(nums.begin(), nums.end(), ans.begin() + nums.size());
7        return ans;
8    }
9};