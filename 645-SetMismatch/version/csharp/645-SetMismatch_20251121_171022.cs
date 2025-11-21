// Last updated: 2025/11/21 下午5:10:22
public class Solution {
    public int[] FindErrorNums(int[] nums) {
        var groups = nums.GroupBy(x => x).ToList();
        int duplicate = groups.First(g => g.Count() == 2).Key;
        int missing = Enumerable.Range(1, nums.Length)
            .Except(nums)
            .First();
        return new int[] { duplicate, missing };
    }
}