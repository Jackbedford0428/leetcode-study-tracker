// Last updated: 2026/8/21 下午11:52:32
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans;
5        ans.reserve(nums.size() * 2);
6        ans.insert(ans.end(), nums.begin(), nums.end
7        ());
8        ans.insert(ans.end(), nums.begin(), nums.end());
9        return ans;
10    }
11};