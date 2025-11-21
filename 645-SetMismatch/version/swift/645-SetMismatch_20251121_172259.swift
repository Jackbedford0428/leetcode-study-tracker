// Last updated: 2025/11/21 下午5:22:59
class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        var seen = Set<Int>()
        var duplicate = 0
        
        for num in nums {
            if seen.contains(num) {
                duplicate = num
            }
            seen.insert(num)
        }
        
        let missing = (1...nums.count).first { !seen.contains($0) }!
        return [duplicate, missing]
    }
}