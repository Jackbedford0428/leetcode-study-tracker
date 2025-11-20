# Last updated: 2025/11/20 下午1:09:03
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        return [nums[i // 2] if i % 2 == 0 else nums[n + i // 2]  for i in range(2 * n)]