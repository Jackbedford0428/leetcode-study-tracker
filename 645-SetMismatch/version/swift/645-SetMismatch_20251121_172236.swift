// Last updated: 2025/11/21 下午5:22:36
class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        var mutableNums = nums
        var duplicate = 0
        for num in mutableNums {
            let index = abs(num) - 1
            if mutableNums[index] < 0 {
                duplicate = abs(num)
            } else {
                mutableNums[index] = -mutableNums[index]
            }
        }
        let missing = (0..<mutableNums.count).first { mutableNums[$0] > 0 }! + 1
        return [duplicate, missing]
    }
}