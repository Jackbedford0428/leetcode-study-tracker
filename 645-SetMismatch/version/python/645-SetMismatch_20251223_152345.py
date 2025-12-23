# Last updated: 2025/12/23 下午3:23:45
1class Solution:
2    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
3        i = 0
4        n = len(nums)
5        while i < n:
6            correct = nums[i] - 1
7            if nums[i] != nums[correct]:
8                nums[i], nums[correct] = nums[correct], nums[i]
9            else:
10                i += 1
11        ans: List[int] = []
12        for idx, value in enumerate(nums):
13            if value != idx + 1:
14                ans.append(idx + 1)
15        return ans
16