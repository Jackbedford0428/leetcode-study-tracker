// Last updated: 2025/11/19 下午1:54:33
class Solution {
    public int[] getConcatenation(int[] nums) {
        // 寫法 1: System.arraycopy 方法 (Native array copy)
        // ✅✅✅ Idiomatic: Java 標準做法
        // ⚡⚡⚡ Performance: 最快（JVM 原生方法）
        int n = nums.length;
        int[] ans = new int[n * 2];
        System.arraycopy(nums, 0, ans, 0, n);
        System.arraycopy(nums, 0, ans, n, n);
        return ans;

        // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
        // ✅ Idiomatic: Java 最常見的寫法
        // ⚡⚡ Performance: 中等（JIT 編譯後效能佳）
        // int n = nums.length;
        // int[] ans = new int[n * 2];
        // for (int i = 0; i < n; i++) {
        //     ans[i] = nums[i];
        //     ans[i + n] = nums[i];
        // }
        // return ans;
        
        // 寫法 3: enhanced for 迴圈配合索引 (foreach with manual index)
        // ⚠️ Idiomatic: 不推薦（foreach 不適合需要索引的場景）
        // ⚡ Performance: 較慢
        // int n = nums.length;
        // int[] ans = new int[n * 2];
        // int idx = 0;
        // for (int num : nums) {
        //     ans[idx] = num;
        //     ans[idx + n] = num;
        //     idx++;
        // }
        // return ans;
        
        // 寫法 4: Arrays.copyOf + System.arraycopy 組合
        // ✅ Idiomatic: 可接受，但較冗長
        // ⚡⚡ Performance: 略慢（多一次配置）
        // int[] ans = Arrays.copyOf(nums, n * 2);
        // System.arraycopy(nums, 0, ans, n, n);
        // return ans;

        // 寫法 5: Stream API（Java 8+）
        // ✅ Idiomatic: 現代 Java 函數式風格
        // ⚡ Performance: 最慢（Stream 開銷大）
        // return IntStream.concat(
        //     Arrays.stream(nums),
        //     Arrays.stream(nums)
        // ).toArray();
    }
}
