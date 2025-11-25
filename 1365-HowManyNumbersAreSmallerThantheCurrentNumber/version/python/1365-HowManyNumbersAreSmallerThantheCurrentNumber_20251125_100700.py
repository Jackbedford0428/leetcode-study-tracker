# Last updated: 2025/11/25 上午10:07:00
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = [0] * len(nums)
        for i, curr in enumerate(nums):
            cnt = 0
            for num in nums:
                if num < curr:
                    cnt += 1
            ans[i] = cnt
        return ans