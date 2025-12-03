// Last updated: 2025/12/3 下午4:24:03
1use std::collections::BTreeMap;
2
3impl Solution {
4    pub fn smaller_numbers_than_current(nums: Vec<i32>) -> Vec<i32> {
5        let mut count: BTreeMap<i32, i32> = BTreeMap::new();
6        for &num in &nums {
7            *count.entry(num).or_insert(0) += 1;
8        }
9        
10        let mut smaller: BTreeMap<i32, i32> = BTreeMap::new();
11        let mut total = 0;
12        for (&key, &cnt) in &count {
13            smaller.insert(key, total);
14            total += cnt;
15        }
16        
17        nums.iter().map(|&num| smaller[&num]).collect()
18    }
19}