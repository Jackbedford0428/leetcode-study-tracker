// Last updated: 2025/12/23 下午3:40:39
1impl Solution {
2    pub fn find_disappeared_numbers(mut nums: Vec<i32>) -> Vec<i32> {
3        let n = nums.len();
4        for i in 0..n {
5            let idx = nums[i].abs() as usize - 1;
6            if nums[idx] > 0 {
7                nums[idx] = -nums[idx];
8            }
9        }
10        let mut result = Vec::with_capacity(n);
11        for (idx, &value) in nums.iter().enumerate() {
12            if value > 0 {
13                result.push(idx as i32 + 1);
14            }
15        }
16        result
17    }
18}