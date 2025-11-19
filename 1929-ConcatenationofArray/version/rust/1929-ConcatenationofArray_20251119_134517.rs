// Last updated: 2025/11/19 下午1:45:17
impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        // 寫法 1: extend 方法（預分配容量）(Vec::extend with capacity)
        // ✅✅✅ Idiomatic: 最推薦的 Rust 風格
        // ⚡⚡⚡ Performance: 最快（預分配 + 連續記憶體操作）
        let mut ans = Vec::with_capacity(nums.len() * 2);
        ans.extend(&nums);
        ans.extend(&nums);
        ans

        // 寫法 1-1: extend 方法（未預分配）(Vec::extend without capacity)
        // ✅ Idiomatic: 簡潔但效能差
        // ⚡ Performance: 很慢（多次重新分配，Rust Vec 容量成長策略為 2x）
        // let mut ans = Vec::new();
        // ans.extend(&nums);
        // ans.extend(&nums);
        // ans

        // 寫法 2: range 迴圈 (Range-based indexing)
        // ✅ Idiomatic: 可接受，但不如迭代器 Rust 風格
        // ⚡⚡ Performance: 與 enumerate 相近
        // let n = nums.len();
        // let mut ans = vec![0; n * 2];
        // for i in 0..n {
        //     ans[i] = nums[i];
        //     ans[i + n] = nums[i];
        // }
        // ans

        // 寫法 3: enumerate 迭代器 (Iterator with enumerate)
        // ✅✅✅ Idiomatic: 最符合 Rust 習慣的迴圈寫法
        // ⚡⚡ Performance: 中等（零成本抽象）
        // let n = nums.len();
        // let mut ans = vec![0; n * 2];
        // for (i, &num) in nums.iter().enumerate() {
        //     ans[i] = num;
        //     ans[i + n] = num;
        // }
        // ans

        // 寫法 4: chain 迭代器 (Iterator::chain)
        // ✅✅ Idiomatic: 函數式風格，優雅
        // ⚡⚡ Performance: 略慢（迭代器開銷）
        // nums.iter().chain(nums.iter()).copied().collect()
        
        // 寫法 5: repeat + flatten（創意寫法）
        // ✅ Idiomatic: Rust 迭代器風格
        // ⚡⚡ Performance: 中等
        // std::iter::repeat(&nums).take(2).flatten().copied().collect()

        // 寫法 6: from_iter（顯式建構）
        // ✅ Idiomatic: 明確但冗長
        // ⚡⚡ Performance: 與 chain 相近
        // Vec::from_iter(nums.iter().chain(nums.iter()).copied())
    }
}
