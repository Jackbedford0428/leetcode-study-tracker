// Last updated: 2025/11/21 下午5:16:52
class Solution {
    fun findErrorNums(nums: IntArray): IntArray {
        var duplicate = 0
        for (num in nums) {
            val index = Math.abs(num) - 1
            if (nums[index] < 0) {
                duplicate = Math.abs(num)
            } else {
                nums[index] = -nums[index]
            }
        }
        val missing = nums.indices.first { nums[it] > 0 } + 1
        return intArrayOf(duplicate, missing)
    }
}