// Last updated: 2025/11/21 下午5:18:14
class Solution {
    fun findErrorNums(nums: IntArray): IntArray {
        nums.sort()
        var duplicate = 0
        for (i in 1 until nums.size) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i]
                break
            }
        }
        
        var missing = 0
        val n = nums.size
        val expected_sum = n * (n + 1) / 2
        val actual_sum = nums.sum()
        missing = expected_sum - actual_sum + duplicate
        
        return intArrayOf(duplicate, missing)
    }
}