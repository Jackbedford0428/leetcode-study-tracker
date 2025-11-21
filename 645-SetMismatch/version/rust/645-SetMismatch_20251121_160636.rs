// Last updated: 2025/11/21 下午4:06:36
// use std::collections::HashSet;

impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
        let mut nums = nums;  // 取得可變所有權
        nums.sort_unstable();
        let mut duplicate = 0;
        
        for i in 1..nums.len() {
            if nums[i] == nums[i - 1] {
                duplicate = nums[i];
                break;
            }
        }
        
        let n = nums.len() as i32;
        let expected_sum = n * (n + 1) / 2;
        let actual_sum: i32 = nums.iter().sum();
        let missing = expected_sum - actual_sum + duplicate;
        
        vec![duplicate, missing]
    }
}