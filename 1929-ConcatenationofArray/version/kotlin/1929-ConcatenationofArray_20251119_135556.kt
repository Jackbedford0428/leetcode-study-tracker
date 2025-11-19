// Last updated: 2025/11/19 下午1:55:56
class Solution {
    fun getConcatenation(nums: IntArray): IntArray {
        // 寫法 1: copyInto 方法 (Kotlin stdlib)
        // ✅✅✅ Idiomatic: 最推薦的 Kotlin 標準做法
        // ⚡⚡⚡ Performance: 最快（內部調用 System.arraycopy）
        val n = nums.size
        val ans = IntArray(n * 2)
        nums.copyInto(ans, 0, 0, n)
        nums.copyInto(ans, n, 0, n)
        return ans
        
        // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
        // ✅ Idiomatic: Kotlin 中可接受的寫法
        // ⚡⚡ Performance: 中等
        // val n = nums.size
        // val ans = IntArray(n * 2)
        // for (i in 0 until n) {
        //     ans[i] = nums[i]
        //     ans[i + n] = nums[i]
        // }
        // return ans
        
        // 寫法 3: forEachIndexed 擴展函式 (Kotlin extension)
        // ✅✅ Idiomatic: 更 Kotlin 風格的迭代方式
        // ⚡⚡ Performance: 與 for 相近（inline 函式）
        // val n = nums.size
        // val ans = IntArray(n * 2)
        // nums.forEachIndexed { i, num ->
        //     ans[i] = num
        //     ans[i + n] = num
        // }
        // return ans

        // 寫法 4: + 操作符 (Operator overloading)
        // ✅ Idiomatic: 簡潔的 Kotlin 風格
        // ⚡ Performance: 較慢（額外的記憶體配置）
        // return nums + nums

        // 寫法 5: System.arraycopy（Java 互通）
        // ⚠️ Idiomatic: 不推薦（Java 遺留 API）
        // ⚡⚡⚡ Performance: 理應與 copyInto 持平，但實際效能最高
        // val n = nums.size
        // val ans = IntArray(n * 2)
        // System.arraycopy(nums, 0, ans, 0, n)
        // System.arraycopy(nums, 0, ans, n, n)
        // return ans
    }
}
