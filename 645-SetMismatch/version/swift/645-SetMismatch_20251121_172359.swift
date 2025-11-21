// Last updated: 2025/11/21 下午5:23:59
class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        var sortedNums = nums.sorted()
        var duplicate = 0
        for i in 1..<sortedNums.count {
            if sortedNums[i] == sortedNums[i - 1] {
                duplicate = sortedNums[i]
                break
            }
        }
        
        let n = nums.count
        let expected_sum = n * (n + 1) / 2
        let actual_sum = nums.reduce(0, +)
        let missing = expected_sum - actual_sum + duplicate
        
        return [duplicate, missing]
    }
}