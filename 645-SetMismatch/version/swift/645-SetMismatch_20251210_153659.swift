// Last updated: 2025/12/10 下午3:36:59
1class Solution {
2    func smallerNumbersThanCurrent(_ nums: [Int]) -> [Int] {
3        var count = Array(repeating: 0, count: 101)
4        
5        // 統計每個數字出現次數
6        for num in nums {
7            count[num] += 1
8        }
9        
10        // 累加計數
11        for i in 1...100 {
12            count[i] += count[i - 1]
13        }
14        
15        // 建立結果
16        return nums.map { $0 > 0 ? count[$0 - 1] : 0 }
17    }
18}