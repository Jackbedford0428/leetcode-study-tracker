// Last updated: 2025/12/10 下午5:43:16
1class Solution {
2    func smallerNumbersThanCurrent(_ nums: [Int]) -> [Int] {
3        let indexed = nums.enumerated().sorted { $0.element < $1.element }
4        var result = Array(repeating: 0, count: nums.count)
5        
6        for i in indexed.indices {
7            if i > 0 && indexed[i].element == indexed[i - 1].element {
8                result[indexed[i].offset] = result[indexed[i - 1].offset]
9            } else {
10                result[indexed[i].offset] = i
11            }
12        }
13        return result
14    }
15}