// Last updated: 2025/12/3 下午5:50:43
1class Solution {
2    fun smallerNumbersThanCurrent(nums: IntArray): IntArray {
3        val count = mutableMapOf<Int, Int>()
4        for (num in nums) {
5            count[num] = count.getOrDefault(num, 0) + 1
6            // getOrDefault: 不存在則回傳預設值 0
7        }
8        
9        // 取得所有不重複的數字並排序
10        val sortedKeys = count.keys.sorted()
11        
12        // 假設 nums = [4, 1, 2, 2, 5]
13        // count -> {4:1, 1:1, 2:2, 5:1}
14        // sortedKeys -> [1, 2, 4, 5]
15        
16        // 建立映射：數字 -> 有多少數字比它小
17        val smaller = mutableMapOf<Int, Int>()
18        var total = 0
19        for (key in sortedKeys) {
20            smaller[key] = total
21            total += count[key]!!
22        }
23        
24        // smaller -> {1:0, 2:1, 4:3, 5:4}
25        return IntArray(nums.size) { smaller[nums[it]]!! }
26    }
27}