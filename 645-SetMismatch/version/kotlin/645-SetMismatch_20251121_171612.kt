// Last updated: 2025/11/21 下午5:16:12
class Solution {
    fun findErrorNums(nums: IntArray): IntArray {
        val n = nums.size
        val expected_sum = n * (n + 1) / 2
        val actual_sum = nums.sum()
        
        val expected_square_sum = n.toLong() * (n + 1) * (2 * n + 1) / 6
        val actual_square_sum = nums.sumOf { it.toLong() * it }
        
        val diff_xy = actual_sum - expected_sum
        val square_diff_xy = actual_square_sum - expected_square_sum
        val sum_xy = (square_diff_xy / diff_xy).toInt()
        
        val duplicate = (sum_xy + diff_xy) / 2
        val missing = sum_xy - duplicate
        return intArrayOf(duplicate, missing)
    }
}