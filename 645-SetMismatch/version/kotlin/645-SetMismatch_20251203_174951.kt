// Last updated: 2025/12/3 下午5:49:51
1class Solution {
2    fun smallerNumbersThanCurrent(nums: IntArray): IntArray {
3        val count = IntArray(101)
4        
5        // 統計每個數字出現次數
6        for (num in nums) {
7            count[num]++
8        }
9        
10        // 累加計數
11        for (i in 1..100) {
12            count[i] += count[i - 1]
13        }
14        
15        // 建立結果
16        return IntArray(nums.size) { i ->
17            if (nums[i] > 0) count[nums[i] - 1] else 0
18        }
19    }
20}