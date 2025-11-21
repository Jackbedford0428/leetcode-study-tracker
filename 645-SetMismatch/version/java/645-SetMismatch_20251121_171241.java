// Last updated: 2025/11/21 下午5:12:41
class Solution {
    public int[] findErrorNums(int[] nums) {
        HashSet<Integer> seen = new HashSet<>();
        int duplicate = 0;
        
        for (int num : nums) {
            if (seen.contains(num)) {
                duplicate = num;
            }
            seen.add(num);
        }
        
        int missing = 0;
        for (int i = 1; i <= nums.length; i++) {
            if (!seen.contains(i)) {
                missing = i;
                break;
            }
        }
        
        return new int[] { duplicate, missing };
    }
}