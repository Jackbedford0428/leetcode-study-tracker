// Last updated: 2025/11/13 下午6:28:17
class Solution {
    func getConcatenation(_ nums: [Int]) -> [Int] {
        let n = nums.count
        var ans = [Int](repeating: 0, count: n * 2)
        for i in 0..<n {
            ans[i] = nums[i]
            ans[i + n] = nums[i]
        }
        return ans
    }
}