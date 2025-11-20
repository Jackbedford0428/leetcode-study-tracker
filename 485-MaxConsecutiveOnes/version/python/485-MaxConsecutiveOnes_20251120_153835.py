# Last updated: 2025/11/20 下午3:38:35
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxCount, count = 0, 0
        for num in nums:
            if num:
                count += 1
            else:
                count = 0
            if count > maxCount:
                maxCount = count
        return maxCount
        