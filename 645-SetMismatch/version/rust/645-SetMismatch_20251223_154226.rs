// Last updated: 2025/12/23 下午3:42:26
1impl Solution {
2    pub fn find_disappeared_numbers(mut nums: Vec<i32>) -> Vec<i32> {
3        let n = nums.len();
4        let mut i = 0;
5        while i < n {
6            let correct = (nums[i] - 1) as usize;
7            if nums[i] != nums[correct] {
8                nums.swap(i, correct);
9            } else {
10                i += 1;
11            }
12        }
13        let mut ans = Vec::new();
14        for (idx, value) in nums.into_iter().enumerate() {
15            if value != idx as i32 + 1 {
16                ans.push(idx as i32 + 1);
17            }
18        }
19        ans
20    }
21}