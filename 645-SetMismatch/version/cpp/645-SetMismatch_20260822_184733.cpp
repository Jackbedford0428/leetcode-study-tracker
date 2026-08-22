// Last updated: 2026/8/22 下午6:47:33
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int actual_sum = accumulate(nums.begin(), nums.end(), 0);
5        long long actual_square_sum = inner_product(nums.begin(), nums.end(), nums.begin(), 0LL);
6        int n = nums.size();
7        int expected_sum = n * (n + 1) / 2;
8        long long expected_square_sum = (long long)n * (n + 1) * (2 * n + 1) / 6;
9        int diff_xy = actual_sum - expected_sum;
10        int sum_xy = (actual_square_sum - expected_square_sum) / diff_xy;
11        int dup = (sum_xy + diff_xy) / 2;
12        int miss = sum_xy - dup;
13        return {dup, miss};
14    }
15};