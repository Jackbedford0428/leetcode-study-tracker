// Last updated: 2026/8/24 上午12:19:06
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n, 1);
6        // set `ans` as prefix product except self
7        for (int i = 1; i < n; i++)
8            ans[i] = ans[i - 1] * nums[i - 1];
9        // finalize
10        int suffix = 1;
11        for (int i = n - 1; i >= 0; i--) {
12            ans[i] *= suffix;
13            suffix *= nums[i];
14        }
15        return ans;
16    }
17};