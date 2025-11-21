// Last updated: 2025/11/21 下午3:25:15
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = accumulate(nums.begin(), nums.end(), 0);
        
        long long expected_square_sum = (long long)n * (n + 1) * (2 * n + 1) / 6;
        long long actual_square_sum = 0;
        for (int num : nums) {
            actual_square_sum += (long long)num * num;
        }
        
        int diff_xy = actual_sum - expected_sum;
        long long square_diff_xy = actual_square_sum - expected_square_sum;
        int sum_xy = square_diff_xy / diff_xy;
        
        int duplicate = (sum_xy + diff_xy) / 2;
        int missing = sum_xy - duplicate;
        return {duplicate, missing};
    }
};