// Last updated: 2026/8/24 上午12:01:05
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6        // set `ans` as prefix product array
7        ans[0] = nums[0];
8        for (int i = 1; i < n; i++)
9            ans[i] = ans[i-1] * nums[i];
10        // finalize
11        int suffix = 1;
12        for (int i = n - 1; i >= 1; i--) {
13            ans[i] = ans[i - 1] * suffix;
14            suffix *= nums[i];
15        }
16        ans[0] = suffix;
17        return ans;
18    }
19};
20