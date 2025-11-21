// Last updated: 2025/11/21 上午10:21:18
public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0;
        int currentCount = 0;
        foreach (int num in nums) {
            if (num == 1) {
                currentCount++;
                maxCount = Math.Max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }
        return maxCount;
    }
}