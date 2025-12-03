// Last updated: 2025/12/3 下午4:45:38
1class Solution {
2    public int[] smallerNumbersThanCurrent(int[] nums) {
3        int[] count = new int[101];
4        
5        // 統計每個數字出現次數
6        for (int num : nums) {
7            count[num]++;
8        }
9        
10        // 累加計數
11        for (int i = 1; i <= 100; i++) {
12            count[i] += count[i - 1];
13        }
14        
15        // 建立結果
16        int[] result = new int[nums.length];
17        for (int i = 0; i < nums.length; i++) {
18            result[i] = (nums[i] > 0) ? count[nums[i] - 1] : 0;
19        }
20        
21        return result;
22    }
23}