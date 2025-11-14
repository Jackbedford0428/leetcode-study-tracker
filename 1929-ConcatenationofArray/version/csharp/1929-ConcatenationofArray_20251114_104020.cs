// Last updated: 2025/11/14 上午10:40:20
public class Solution {
    public int[] GetConcatenation(int[] nums) {
        int n = nums.Length;
        int[] ans = new int[n * 2];
        // for (int i = 0; i < n; i++) {
        //     ans[i] = nums[i];
        //     ans[i + n] = nums[i];
        // }
        Array.Copy(nums, 0, ans, 0, n);
        Array.Copy(nums, 0, ans, n, n);
        return ans;
    }
}