// Last updated: 2026/9/24 上午9:49:48
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
13
14        // vector<vector<int>> res;
15        // vector<int> path;
16        // backtrack(nums, 0, path, res);
17        // return res;
18    }
19
20private:
21    void backtrack(vector<int> &nums, int level, vector<int> &path, vector<vector<int>> &res) {
22        if (level == static_cast<int>(nums.size())) {
23            res.push_back(path);
24            return;
25        }
26        path.push_back(nums[level]);
27        backtrack(nums, level + 1, path, res);
28        path.pop_back();
29        backtrack(nums, level + 1, path, res);
30    }
31};