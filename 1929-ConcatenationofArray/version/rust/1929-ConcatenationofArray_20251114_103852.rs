// Last updated: 2025/11/14 上午10:38:52
impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let mut ans = Vec::with_capacity(nums.len() * 2);
        ans.extend(&nums);
        ans.extend(&nums);
        ans
    }
}