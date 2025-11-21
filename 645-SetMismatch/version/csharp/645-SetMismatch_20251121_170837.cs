// Last updated: 2025/11/21 下午5:08:37
public class Solution {
    public int[] FindErrorNums(int[] nums) {
        int n = nums.Length;
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = nums.Sum();
        
        long expected_square_sum = (long)n * (n + 1) * (2 * n + 1) / 6;
        long actual_square_sum = nums.Sum(x => (long)x * x);
        
        int diff_xy = actual_sum - expected_sum;
        long square_diff_xy = actual_square_sum - expected_square_sum;
        int sum_xy = (int)(square_diff_xy / diff_xy);
        
        int duplicate = (sum_xy + diff_xy) / 2;
        int missing = sum_xy - duplicate;
        return new int[] { duplicate, missing };
    }
}