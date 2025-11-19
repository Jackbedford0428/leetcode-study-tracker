// Last updated: 2025/11/19 下午2:06:57
class Solution {
    func getConcatenation(_ nums: [Int]) -> [Int] {
        // 寫法 1: 陣列相加 (Array concatenation)
        // ✅✅✅ Idiomatic: 最簡潔的 Swift 寫法
        // ⚡⚡⚡ Performance: 最快（標準庫優化）
        // return nums + nums

        // 寫法 2: 傳統 range 迴圈 (Range-based for loop)
        // ✅ Idiomatic: Swift 常見寫法
        // ⚡⚡ Performance: 中等
        // let n = nums.count
        // var ans = [Int](repeating: 0, count: n * 2)
        // for i in 0..<n {
        //     ans[i] = nums[i]
        //     ans[i + n] = nums[i]
        // }
        // return ans
        
        // 寫法 3: enumerated() 迴圈 (Swift enumeration)
        // ✅✅ Idiomatic: 更 Swift 風格的迭代方式
        // ⚡⚡ Performance: 與 range 相近
        // let n = nums.count
        // var ans = [Int](repeating: 0, count: n * 2)
        // for (i, num) in nums.enumerated() {
        //     ans[i] = num
        //     ans[i + n] = num
        // }
        // return ans

        // 寫法 4: append(contentsOf:) 方法
        // ✅ Idiomatic: Swift 標準做法
        // ⚡⚡⚡ Performance: 與 + 相近
        // var ans = nums
        // ans.append(contentsOf: nums)
        // return ans

        // 寫法 5: flatMap（高階函式）
        // ✅ Idiomatic: Swift 函數式風格
        // ⚡⚡ Performance: 中等
        return [nums, nums].flatMap { $0 }

        // 寫法 6: reduce（函數式風格）
        // ⚠️ Idiomatic: 不推薦（過度複雜）
        // ⚡ Performance: 較慢
        // return (0..<2).reduce([]) { result, _ in result + nums }
    }
}
