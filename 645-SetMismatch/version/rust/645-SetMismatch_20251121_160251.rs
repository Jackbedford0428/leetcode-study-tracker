// Last updated: 2025/11/21 下午4:02:51
// use std::collections::HashSet;

impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut count = vec![0; n + 1];
        let mut duplicate = 0;
        
        for &num in &nums {
            if count[num as usize] == 1 {
                duplicate = num;
            }
            count[num as usize] += 1;
        }
        
        let missing = (1..=n as i32)
            .find(|&i| count[i as usize] == 0)
            .unwrap();
        
        vec![duplicate, missing]
    }
}