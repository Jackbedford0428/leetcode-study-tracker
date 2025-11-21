# Last updated: 2025/11/21 下午1:55:03
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        duplicate = [num for num, cnt in count.items() if cnt == 2][0]
        missing = (set(range(1, len(nums) + 1)) - set(nums)).pop()
        return [duplicate, missing]