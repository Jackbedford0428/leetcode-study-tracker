// Last updated: 2025/12/12 上午10:05:58
1class Solution {
2    public List<Integer> findDisappearedNumbers(int[] nums) {
3        for (int num : nums) {
4            if (nums[Math.abs(num) - 1] > 0) {
5                nums[Math.abs(num) - 1] *= -1;
6            }
7        }
8        List<Integer> result = new ArrayList<>();
9        for (int i = 0; i < nums.length; i++) {
10            if (nums[i] > 0) {
11                result.add(i + 1);
12            }
13        }
14        return result;
15    }
16}