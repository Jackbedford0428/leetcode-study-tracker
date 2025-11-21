// Last updated: 2025/11/21 下午5:13:57
class Solution {
    public int[] findErrorNums(int[] nums) {
        Arrays.sort(nums);
        int duplicate = 0, missing = 0;
        
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }
        }
        
        int n = nums.length;
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        for (int num : nums) {
            actual_sum += num;
        }
        missing = expected_sum - (actual_sum - duplicate);

        return new int[] { duplicate, missing };
    }
}