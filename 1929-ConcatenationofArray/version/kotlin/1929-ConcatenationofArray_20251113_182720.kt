// Last updated: 2025/11/13 下午6:27:20
class Solution {
    fun getConcatenation(nums: IntArray): IntArray {
        val n = nums.size
        val ans = IntArray(n * 2)
        for (i in 0 until n) {
            ans[i] = nums[i]
            ans[i + n] = nums[i]
        }
        return ans
    }
}