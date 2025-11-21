// Last updated: 2025/11/21 下午5:09:10
public class Solution {
    public int[] FindErrorNums(int[] nums) {
        int duplicate = 0;
        foreach (int num in nums) {
            int index = Math.Abs(num) - 1;
            if (nums[index] < 0) {
                duplicate = Math.Abs(num);
            } else {
                nums[index] = -nums[index];
            }
        }
        
        int missing = 0;
        for (int i = 0; i < nums.Length; i++) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        return new int[] { duplicate, missing };
    }
}