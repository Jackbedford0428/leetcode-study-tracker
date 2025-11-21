// Last updated: 2025/11/21 下午3:59:02
use std::collections::HashSet;

impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
        let mut seen = HashSet::new();
        let mut duplicate = 0;
        
        for &num in &nums {
            if seen.contains(&num) {
                duplicate = num;
            }
            seen.insert(num);
        }
        
        let missing = (1..=nums.len() as i32)
            .find(|&i| !seen.contains(&i))
            .unwrap();
        
        vec![duplicate, missing]
    }
}