# Last updated: 2025/11/21 下午2:59:46
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        duplicate = 0
        for i in range(1, len(sorted_nums)):
            if sorted_nums[i] == sorted_nums[i - 1]:
                duplicate = sorted_nums[i]
                break
        
        missing = sum(range(1, len(nums) + 1)) - sum(nums) + duplicate
        
        return [duplicate, missing]