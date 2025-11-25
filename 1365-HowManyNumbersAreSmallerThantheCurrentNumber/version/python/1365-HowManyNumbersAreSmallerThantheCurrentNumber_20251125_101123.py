# Last updated: 2025/11/25 上午10:11:23
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        sorted_keys = sorted(count.keys())
        
        # 建立映射：數字 -> 有多少數字比它小
        smaller = {}
        total = 0
        for key in sorted_keys:
            smaller[key] = total
            total += count[key]
        
        return [smaller[num] for num in nums]