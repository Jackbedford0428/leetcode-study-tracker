// Last updated: 2025/12/3 下午4:46:18
1class Solution {
2    public int[] smallerNumbersThanCurrent(int[] nums) {
3        Map<Integer, Integer> count = new HashMap<>();
4        for (int num : nums) {
5            count.put(num, count.getOrDefault(num, 0) + 1);
6            // getOrDefault: 不存在則回傳預設值 0
7        }
8        
9        // 取得所有不重複的數字並排序
10        List<Integer> sortedKeys = new ArrayList<>(count.keySet());
11        Collections.sort(sortedKeys);
12        
13        // 假設 nums = [4, 1, 2, 2, 5]
14        // count -> {4:1, 1:1, 2:2, 5:1}
15        // sortedKeys -> [1, 2, 4, 5]
16        
17        // 建立映射：數字 -> 有多少數字比它小
18        Map<Integer, Integer> smaller = new HashMap<>();
19        int total = 0;
20        for (int key : sortedKeys) {
21            smaller.put(key, total);
22            total += count.get(key);
23        }
24        
25        // smaller -> {1:0, 2:1, 4:3, 5:4}
26        int[] result = new int[nums.length];
27        for (int i = 0; i < nums.length; i++) {
28            result[i] = smaller.get(nums[i]);
29        }
30        return result;
31    }
32}