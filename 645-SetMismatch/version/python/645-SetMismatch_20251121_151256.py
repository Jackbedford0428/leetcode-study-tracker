# Last updated: 2025/11/21 下午3:12:56
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        seen = {}
        duplicate = 0
        for num in nums:
            if num in seen:
                duplicate = num
            seen[num] = 1

        missing = [i for i in range(1, len(nums) + 1) if i not in seen][0]
        return [duplicate, missing]