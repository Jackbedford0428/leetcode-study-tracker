# Last updated: 2025/11/19 下午1:42:02
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        # 寫法 1: 串列相加 (List concatenation)
        # ✅✅✅ Idiomatic: 最 Pythonic 且簡潔的寫法
        # ⚡⚡⚡ Performance: 最快（CPython 底層優化）
        return nums + nums
    
        # 寫法 2: range 迴圈 (Traditional range-based for)
        # ✅ Idiomatic: 可接受，但不如 enumerate Pythonic
        # ⚡⚡ Performance: 與 enumerate 相近
        # n = len(nums)
        # ans = [0] * (n * 2)
        # for i in range(n):
        #     ans[i] = nums[i]
        #     ans[i + n] = nums[i]
        # return ans

        # 寫法 3: enumerate 迴圈 (Pythonic iteration)
        # ✅✅ Idiomatic: 最 Pythonic 的迴圈方式
        # ⚡⚡ Performance: 中等
        # n = len(nums)
        # ans = [0] * (n * 2)
        # for i, num in enumerate(nums):
        #     ans[i] = num
        #     ans[i + n] = num
        # return ans
        
        # 寫法 4: extend 方法 (List.extend)
        # ✅ Idiomatic: Pythonic 但較冗長
        # ⚡⚡⚡ Performance: 與 + 相近
        # ans = nums.copy()
        # ans.extend(nums)
        # return ans
        
        # 寫法 5: 串列推導式 (List comprehension)
        # ✅✅ Idiomatic: Pythonic 風格
        # ⚡⚡ Performance: 中等（額外的迭代）
        # return [num for _ in range(2) for num in nums]

        # 寫法 6: 乘法操作 + 解包（創意寫法）
        # ⚠️ Idiomatic: 不推薦（可讀性差）
        # ⚡⚡ Performance: 中等
        # return [*nums, *nums]
