// Last updated: 2025/11/21 下午5:17:29
class Solution {
    fun findErrorNums(nums: IntArray): IntArray {
        val groups = nums.groupBy { it }
        val duplicate = groups.values.first { it.size == 2 }[0]
        val missing = (1..nums.size).first { it !in groups }
        return intArrayOf(duplicate, missing)
    }
}