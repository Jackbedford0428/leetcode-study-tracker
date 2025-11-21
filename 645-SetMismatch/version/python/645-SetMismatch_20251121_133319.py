# Last updated: 2025/11/21 下午1:33:19
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        seen = set()
        unseen = set(range(1, len(nums) + 1))
        for num in nums:
            if num in seen:
                x = num
            seen.add(num)
            unseen.discard(num)
        y = unseen.pop()

        return [x, y]