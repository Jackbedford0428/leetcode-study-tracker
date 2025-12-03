// Last updated: 2025/12/3 下午2:27:26
1use std::collections::HashMap;
2
3impl Solution {
4    pub fn smaller_numbers_than_current(nums: Vec<i32>) -> Vec<i32> {
5        let mut count: HashMap<i32, i32> = HashMap::new();
6        for &num in &nums {
7            *count.entry(num).or_insert(0) += 1;
8        }
9        
10        // 取得所有不重複的數字並排序
11        let mut sorted_keys: Vec<i32> = count.keys().cloned().collect();
12        sorted_keys.sort_unstable();
13        
14        // 假設 nums = [4, 1, 2, 2, 5]
15        // count -> {1:1, 2:2, 4:1, 5:1}
16        // sorted_keys -> [1, 2, 4, 5]
17        
18        // 建立映射：數字 -> 有多少數字比它小
19        let mut smaller: HashMap<i32, i32> = HashMap::new();
20        let mut total = 0;
21        for key in sorted_keys {
22            smaller.insert(key, total);
23            total += count[&key];
24        }
25        
26        // smaller -> {1:0, 2:1, 4:3, 5:4}
27        //             1 前面 0 個, 2 前面 1 個, 4 前面 3 個, 5 前面 4 個
28        
29        nums.iter().map(|&num| smaller[&num]).collect()
30    }
31}