// Last updated: 2025/11/21 下午4:04:22
// use std::collections::HashSet;

impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len() as i32;
        let expected_sum = n * (n + 1) / 2;
        let actual_sum: i32 = nums.iter().sum();
        
        let expected_square_sum = (n as i64) * ((n + 1) as i64) * ((2 * n + 1) as i64) / 6;
        let actual_square_sum: i64 = nums.iter().map(|&x| (x as i64) * (x as i64)).sum();
        
        let diff_xy = actual_sum - expected_sum;
        let square_diff_xy = actual_square_sum - expected_square_sum;
        let sum_xy = (square_diff_xy / diff_xy as i64) as i32;
        
        let duplicate = (sum_xy + diff_xy) / 2;
        let missing = sum_xy - duplicate;
        vec![duplicate, missing]
    }
}