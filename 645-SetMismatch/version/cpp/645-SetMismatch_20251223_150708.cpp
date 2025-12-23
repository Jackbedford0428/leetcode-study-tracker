// Last updated: 2025/12/23 下午3:07:08
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int> nums) {
4        int i = 0;
5        const int n = nums.size();
6        while (i < n) {
7            int correct = nums[i] - 1;
8            if (nums[i] != nums[correct]) {
9                swap(nums[i], nums[correct]);
10            } else {
11                ++i;
12            }
13        }
14        vector<int> ans;
15        for (int idx = 0; idx < n; ++idx) {
16            if (nums[idx] != idx + 1) {
17                ans.push_back(idx + 1);
18            }
19        }
20        return ans;
21    }
22};