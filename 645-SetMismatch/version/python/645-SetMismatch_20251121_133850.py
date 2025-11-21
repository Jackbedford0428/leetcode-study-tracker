# Last updated: 2025/11/21 下午1:38:50
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        expected_sum = n * (n + 1) // 2
        actual_sum = sum(nums)

        diff_xy = actual_sum - expected_sum

        expected_square_sum = n * (n + 1) * (2 * n + 1) // 6
        actual_square_sum = sum(x * x for x in nums)

        square_diff_xy = actual_square_sum - expected_square_sum
        sum_xy = square_diff_xy // diff_xy

        x = (sum_xy + diff_xy) // 2
        y = sum_xy - x

        return [x, y]