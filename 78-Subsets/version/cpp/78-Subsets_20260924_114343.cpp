// Last updated: 2026/9/24 上午11:43:43
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        int n = static_cast<int>(nums.size());
5        vector<vector<int>> res;
6        for (int mask = 0; mask < (1 << n); ++mask) {
7            vector<int> subset;
8            for (int i = 0; i < n; ++i) {
9                if (mask & (1 << i))
10                    subset.push_back(nums[i]);
11            }
12            res.push_back(subset);
13        }
14        return res;
15    }
16
17private:
18    void backtrack(const vector<int> &nums, int level, vector<int> &path, vector<vector<int>> &res) {
19        if (level == static_cast<int>(nums.size())) {
20            res.push_back(path);
21            return;
22        }
23        path.push_back(nums[level]);
24        backtrack(nums, level + 1, path, res);
25        path.pop_back();
26        backtrack(nums, level + 1, path, res);
27    }
28};