# Last updated: 2025/11/21 下午1:52:45
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        seen = set()
        duplicate = 0
        for num in nums:
            if num in seen:
                duplicate = num
            seen.add(num)
        
        missing = (set(range(1, len(nums) + 1)) - seen).pop()
        return [duplicate, missing]