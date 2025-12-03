// Last updated: 2025/12/3 下午4:26:16
1public class Solution {
2    public int[] SmallerNumbersThanCurrent(int[] nums) {
3        var count = new Dictionary<int, int>();
4        foreach (int num in nums) {
5            count[num] = count.GetValueOrDefault(num, 0) + 1;
6            // GetValueOrDefault: 不存在則回傳預設值 0
7        }
8        
9        // 取得所有不重複的數字並排序
10        var sortedKeys = count.Keys.OrderBy(k => k).ToList();
11        
12        // 假設 nums = [4, 1, 2, 2, 5]
13        // count -> {4:1, 1:1, 2:2, 5:1}
14        // sortedKeys -> [1, 2, 4, 5]
15        
16        // 建立映射：數字 -> 有多少數字比它小
17        var smaller = new Dictionary<int, int>();
18        int total = 0;
19        foreach (int key in sortedKeys) {
20            smaller[key] = total;
21            total += count[key];
22        }
23        
24        // smaller -> {1:0, 2:1, 4:3, 5:4}
25        return nums.Select(num => smaller[num]).ToArray();
26    }
27}