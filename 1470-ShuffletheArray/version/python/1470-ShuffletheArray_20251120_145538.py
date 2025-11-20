# Last updated: 2025/11/20 下午2:55:38
import numpy as np
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        return np.column_stack((nums[:n], nums[n:])).flatten().tolist()