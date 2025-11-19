// Last updated: 2025/11/19 下午1:52:20
public class Solution {
    public int[] GetConcatenation(int[] nums) {
        // 寫法 1: Array.Copy 方法 (.NET Framework API)
        // ✅✅✅ Idiomatic: .NET 標準做法，最推薦
        // ⚡⚡⚡ Performance: 最快（原生方法，內部優化）
        int n = nums.Length;
        int[] ans = new int[n * 2];
        Array.Copy(nums, 0, ans, 0, n);
        Array.Copy(nums, 0, ans, n, n);
        return ans;
        
        // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
        // ✅ Idiomatic: C# 常見寫法，清晰易懂
        // ⚡⚡ Performance: 中等（JIT 編譯後效能不錯）
        // int n = nums.Length;
        // int[] ans = new int[n * 2];
        // for (int i = 0; i < n; i++) {
        //     ans[i] = nums[i];
        //     ans[i + n] = nums[i];
        // }
        // return ans;

        // 寫法 3: foreach 迴圈配合索引 (foreach with manual index)
        // ⚠️ Idiomatic: 不推薦（foreach 不適合需要索引的場景）
        // ⚡ Performance: 較慢（額外的迭代器開銷）
        // int n = nums.Length;
        // int[] ans = new int[n * 2];
        // int idx = 0;
        // foreach (var num in nums) {
        //     ans[idx] = num;
        //     ans[idx + n] = num;
        //     idx++;
        // }
        // return ans;
        
        // 寫法 4: Buffer.BlockCopy（極致效能）
        // ✅ Idiomatic: 低階 API，較少使用
        // ⚡⚡⚡ Performance: 與 Array.Copy 相近或稍快（位元組級複製）
        // int n = nums.Length;
        // int[] ans = new int[n * 2];
        // Buffer.BlockCopy(nums, 0, ans, 0, n * sizeof(int));
        // Buffer.BlockCopy(nums, 0, ans, n * sizeof(int), n * sizeof(int));
        // return ans;
        
        // 寫法 5: LINQ Concat（函數式風格）
        // ✅ Idiomatic: 現代 C# 風格，但不適合效能敏感場景
        // ⚡ Performance: 慢（LINQ 有配置開銷）
        // return nums.Concat(nums).ToArray();
    }
}
