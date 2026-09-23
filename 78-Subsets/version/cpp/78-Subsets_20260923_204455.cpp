// Last updated: 2026/9/23 下午8:44:55
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<vector<int>> res = {{}};
5        for (int num : nums) {
6            int sz = static_cast<int>(res.size());
7            for (int i = 0; i < sz; ++i) {
8                res.push_back(res[i]);
9                res.back().push_back(num);
10            }
11        }
12        return res;
13    }
14};