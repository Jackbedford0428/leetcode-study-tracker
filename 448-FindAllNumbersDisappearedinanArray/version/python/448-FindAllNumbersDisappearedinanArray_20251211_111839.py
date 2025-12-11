# Last updated: 2025/12/11 上午11:18:39
1class Solution:
2    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
3        for num in nums:
4            if nums[abs(num) - 1] > 0:
5                nums[abs(num) - 1] *= -1
6        result = []
7        for i, num in enumerate(nums):
8            if num > 0:
9                result.append(i + 1)
10        return result
11