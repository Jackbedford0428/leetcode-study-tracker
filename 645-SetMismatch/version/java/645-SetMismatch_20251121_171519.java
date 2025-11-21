// Last updated: 2025/11/21 下午5:15:19
class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        long expected_square_sum = (long)n * (n + 1) * (2 * n + 1) / 6;
        long actual_square_sum = 0;
        
        for (int num : nums) {
            actual_sum += num;
            actual_square_sum += (long)num * num;
        }
        
        int diff_xy = actual_sum - expected_sum;
        long square_diff_xy = actual_square_sum - expected_square_sum;
        int sum_xy = (int)(square_diff_xy / diff_xy);
        
        int duplicate = (sum_xy + diff_xy) / 2;
        int missing = sum_xy - duplicate;
        return new int[] { duplicate, missing };
    }
}