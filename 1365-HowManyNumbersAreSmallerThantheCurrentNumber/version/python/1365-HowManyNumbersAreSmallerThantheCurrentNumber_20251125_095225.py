# Last updated: 2025/11/25 上午9:52:25
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count = [0] * 101  # nums[i] 範圍 0-100
        
        # 統計每個數字出現次數: O(n)
        for num in nums:
            count[num] += 1
        
        # 累加計數：count[i] 變成「小於 i 的數字總數」: O(k) 
        for i in range(1, 101):
            count[i] += count[i - 1]
        
        # 建立結果: O(n)
        return [count[num - 1] if num > 0 else 0 for num in nums]