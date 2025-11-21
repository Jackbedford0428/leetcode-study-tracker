// Last updated: 2025/11/21 下午5:23:17
class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        let (seen, duplicate) = nums.reduce(into: (Set<Int>(), 0)) { result, num in
            if result.0.contains(num) {
                result.1 = num
            }
            result.0.insert(num)
        }
        
        let missing = (1...nums.count).first { !seen.contains($0) }!
        return [duplicate, missing]
    }
}