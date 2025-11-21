// Last updated: 2025/11/21 下午5:17:10
class Solution {
    fun findErrorNums(nums: IntArray): IntArray {
        val seen = mutableSetOf<Int>()
        var duplicate = 0
        
        for (num in nums) {
            if (num in seen) {
                duplicate = num
            }
            seen.add(num)
        }
        
        val missing = (1..nums.size).first { it !in seen }
        return intArrayOf(duplicate, missing)
    }
}