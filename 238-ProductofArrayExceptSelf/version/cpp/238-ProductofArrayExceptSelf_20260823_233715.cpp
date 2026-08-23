// Last updated: 2026/8/23 下午11:37:15
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6        // set `ans` as suffix product array
7        ans[n-1] = nums[n-1];
8        for (int i = n - 2; i >= 0; i--)
9            ans[i] = ans[i+1] * nums[i];
10        // set `nums` as prefix product array
11        for (int i = 1; i < n; i++)
12            nums[i] = nums[i-1] * nums[i];
13        // finalize
14        ans[0] = ans[1];
15        for (int i = 1; i < n - 1; i++) {
16            ans[i] = nums[i-1] * ans[i+1];
17        }
18        ans[n-1] = nums[n-2];
19        return ans;
20    }
21};
22