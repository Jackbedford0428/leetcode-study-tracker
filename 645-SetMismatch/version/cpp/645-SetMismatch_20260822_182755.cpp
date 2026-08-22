// Last updated: 2026/8/22 下午6:27:55
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int actual_sum = 0;
5        long long actual_square_sum = 0;
6        for (int num : nums) {
7            actual_sum += num;
8            actual_square_sum += (long long)num * num;
9        }
10        int n = nums.size();
11        int expected_sum = n * (n + 1) / 2;
12        long long expected_square_sum = (long long)n * (n + 1) * (2 * n + 1) / 6;
13        int diff_xy = actual_sum - expected_sum;
14        int sum_xy = (actual_square_sum - expected_square_sum) / diff_xy;
15        int dup = (sum_xy + diff_xy) / 2;
16        int miss = sum_xy - dup;
17        return {dup, miss};
18    }
19};