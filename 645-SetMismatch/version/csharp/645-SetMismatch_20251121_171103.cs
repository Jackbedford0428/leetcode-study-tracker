// Last updated: 2025/11/21 下午5:11:03
public class Solution {
    public int[] FindErrorNums(int[] nums) {
        Array.Sort(nums);
        int duplicate = 0;
        for (int i = 1; i < nums.Length; i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
                break;
            }
        }
        
        int missing = 0;
        int n = nums.Length;
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = nums.Sum();
        missing = expected_sum - (actual_sum - duplicate);
        
        return new int[] { duplicate, missing };
    }
}