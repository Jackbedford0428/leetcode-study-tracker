// Last updated: 2025/12/3 下午4:24:17
1use std::collections::HashMap;
2use std::collections::BTreeMap;
3
4impl Solution {
5    pub fn smaller_numbers_than_current(nums: Vec<i32>) -> Vec<i32> {
6        let mut count: BTreeMap<i32, i32> = BTreeMap::new();
7        for &num in &nums {
8            *count.entry(num).or_insert(0) += 1;
9        }
10        
11        // BTreeMap 遍歷時自動按 key 排序，不需要手動 sort！
12        // 假設 nums = [4, 1, 2, 2, 5]
13        // count -> {1:1, 2:2, 4:1, 5:1}（遍歷順序已是 1, 2, 4, 5）
14        
15        let mut smaller: BTreeMap<i32, i32> = BTreeMap::new();
16        let mut total = 0;
17        for (&key, &cnt) in &count {  // ← 已按 key 有序！
18            smaller.insert(key, total);
19            total += cnt;
20        }
21        
22        nums.iter().map(|&num| smaller[&num]).collect()
23    }
24}