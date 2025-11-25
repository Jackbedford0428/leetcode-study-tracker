# Last updated: 2025/11/25 上午10:06:36
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(enumerate(nums), key=lambda x: x[1])
        result = [0] * len(nums)
        
        # 假設 nums = [4, 1, 3, 2]
        # enumerate(nums) -> [(0,4), (1,1), (2,3), (3,2)]: (index, value)
        # `key=lambda x: x[1]` 表示根據 value 即 x := tuple 的 x[1] 進行排序
        # sorted_nums -> [(1,1), (3,2), (2,3), (0,4)]: (original_index, value) sorted by value
        # enumerate(sorted_nums) -> [(0,(1,1)), (1,(3,2)), (2,(2,3)), (3,(0,4))]: (rank, (original_index, value))
        
        for rank, (original_idx, num) in enumerate(sorted_nums):
            # 跳過重複數字，找第一次出現的位置: rank > 0 很重要 -> 這樣才能確保前一個數字的排名已經被計算過
            if rank > 0 and sorted_nums[rank][1] == sorted_nums[rank - 1][1]:
                result[original_idx] = result[sorted_nums[rank - 1][0]]  # 假如前一個數字相同，則使用前一個的結果: 連續多個相同數字透過迭代傳遞上去
            else:
                result[original_idx] = rank
        
        return result