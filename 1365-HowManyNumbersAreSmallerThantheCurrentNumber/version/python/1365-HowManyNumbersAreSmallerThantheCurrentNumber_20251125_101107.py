# Last updated: 2025/11/25 上午10:11:07
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        return [sum(1 for num in nums if num < curr) for curr in nums]