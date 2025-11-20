// Last updated: 2025/11/20 下午1:45:09
impl Solution {
    pub fn shuffle(nums: Vec<i32>, n: i32) -> Vec<i32> {
        let mut ans = Vec::with_capacity((n * 2) as usize);
        for i in 0..n {
            ans.push(nums[i as usize]);
            ans.push(nums[(i + n) as usize]);
        }
        ans
    }
}