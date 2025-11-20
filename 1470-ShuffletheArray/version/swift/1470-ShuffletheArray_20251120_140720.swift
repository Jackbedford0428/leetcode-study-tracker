// Last updated: 2025/11/20 下午2:07:20
class Solution {
    func shuffle(_ nums: [Int], _ n: Int) -> [Int] {
        var ans = [Int](repeating: 0, count: n * 2)
        for i in 0..<n {
            ans[2 * i] = nums[i]
            ans[2 * i + 1] = nums[i + n]
        }
        return ans
    }
}