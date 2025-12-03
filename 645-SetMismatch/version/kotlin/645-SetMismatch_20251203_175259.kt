// Last updated: 2025/12/3 下午5:52:59
1class Solution {
2    fun smallerNumbersThanCurrent(nums: IntArray): IntArray {
3        val indexed = nums.withIndex().sortedBy { it.value }
4        val result = IntArray(nums.size)
5        
6        for (i in indexed.indices) {
7            if (i > 0 && indexed[i].value == indexed[i - 1].value) {
8                result[indexed[i].index] = result[indexed[i - 1].index]
9            } else {
10                result[indexed[i].index] = i
11            }
12        }
13        return result
14    }
15}