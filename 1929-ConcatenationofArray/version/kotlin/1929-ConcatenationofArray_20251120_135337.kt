// Last updated: 2025/11/20 下午1:53:37
class Solution {
    fun shuffle(nums: IntArray, n: Int): IntArray {
        val ans = IntArray(2 * n);
        for (i in 0 until n) {
            ans[2 * i] = nums[i];
            ans[2 * i + 1] = nums[i + n];
        }
        return ans;
    }
}