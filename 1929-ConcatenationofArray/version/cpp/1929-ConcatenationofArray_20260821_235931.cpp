// Last updated: 2026/8/21 下午11:59:31
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans(nums);
5        ans.insert(ans.end(), nums.begin(), nums.end());
6        return ans;
7    }
8};