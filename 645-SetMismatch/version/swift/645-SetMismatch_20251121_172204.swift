// Last updated: 2025/11/21 下午5:22:04
class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        let n = nums.count
        let expected_sum = n * (n + 1) / 2
        let actual_sum = nums.reduce(0, +)
        
        let expected_square_sum = n * (n + 1) * (2 * n + 1) / 6
        let actual_square_sum = nums.reduce(0) { $0 + $1 * $1 }
        
        let diff_xy = actual_sum - expected_sum
        let square_diff_xy = actual_square_sum - expected_square_sum
        let sum_xy = square_diff_xy / diff_xy
        
        let duplicate = (sum_xy + diff_xy) / 2
        let missing = sum_xy - duplicate
        return [duplicate, missing]
    }
}