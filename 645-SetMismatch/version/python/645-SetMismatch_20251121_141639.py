# Last updated: 2025/11/21 下午2:16:39
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        duplicate = 0
        for num in nums:
            index = abs(num) - 1
            if nums[index] < 0:
                duplicate = abs(num)
            else:
                nums[index] = -nums[index]
        
        missing = 0
        for i in range(len(nums)):
            if nums[i] > 0:
                missing = i + 1
                break
        
        return [duplicate, missing]