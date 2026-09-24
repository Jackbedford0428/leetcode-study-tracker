// Last updated: 2026/9/24 上午10:40:07
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<vector<int>> res;
5        vector<int> path;
6        backtrack(nums, 0, path, res);
7        return res;
8    }
9
10private:
11    void backtrack(const vector<int> &nums, int level, vector<int> &path, vector<vector<int>> &res) {
12        if (level == static_cast<int>(nums.size())) {
13            res.push_back(path);
14            return;
15        }
16        path.push_back(nums[level]);
17        backtrack(nums, level + 1, path, res);
18        path.pop_back();
19        backtrack(nums, level + 1, path, res);
20    }
21};