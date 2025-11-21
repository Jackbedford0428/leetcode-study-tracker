// Last updated: 2025/11/21 上午10:28:54
class Solution {
    fun findMaxConsecutiveOnes(nums: IntArray): Int {
        var maxCount = 0
        var currentCount = 0
        for (num in nums) {
            if (num == 1) {
                currentCount++
                maxCount = maxOf(maxCount, currentCount)
            } else {
                currentCount = 0
            }
        }
        return maxCount
    }
}