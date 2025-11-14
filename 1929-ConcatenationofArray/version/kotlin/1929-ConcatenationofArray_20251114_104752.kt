// Last updated: 2025/11/14 上午10:47:52
class Solution {
    fun getConcatenation(nums: IntArray): IntArray {
        val n = nums.size
        val ans = IntArray(n * 2)
        // for (i in 0 until n) {
        //     ans[i] = nums[i]
        //     ans[i + n] = nums[i]
        // }
        // System.arraycopy(nums, 0, ans, 0, n)
        // System.arraycopy(nums, 0, ans, n, n)
        nums.copyInto(ans, 0, 0, n)
        nums.copyInto(ans, n, 0, n)
        return ans
    }
}
