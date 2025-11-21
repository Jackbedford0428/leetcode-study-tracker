// Last updated: 2025/11/21 下午4:06:58
// use std::collections::HashSet;

impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
        let mut nums = nums;  // 取得可變所有權
        let mut duplicate = 0;
        
        for i in 0..nums.len() {
            let index = (nums[i].abs() - 1) as usize;
            if nums[index] < 0 {
                duplicate = nums[i].abs();
            } else {
                nums[index] = -nums[index];
            }
        }
        
        let n = nums.len() as i32;
        let expected_sum = n * (n + 1) / 2;
        let actual_sum: i32 = nums.iter().map(|&x| x.abs()).sum();
        let missing = expected_sum - actual_sum + duplicate;
        
        vec![duplicate, missing]
    }
}