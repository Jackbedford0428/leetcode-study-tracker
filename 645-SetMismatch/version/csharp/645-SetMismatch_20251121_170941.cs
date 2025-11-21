// Last updated: 2025/11/21 下午5:09:41
public class Solution {
    public int[] FindErrorNums(int[] nums) {
        HashSet<int> seen = new HashSet<int>();
        int duplicate = 0;
        
        foreach (int num in nums) {
            if (seen.Contains(num)) {
                duplicate = num;
            }
            seen.Add(num);
        }
        
        int missing = 0;
        for (int i = 1; i <= nums.Length; i++) {
            if (!seen.Contains(i)) {
                missing = i;
                break;
            }
        }
        
        return new int[] { duplicate, missing };
    }
}