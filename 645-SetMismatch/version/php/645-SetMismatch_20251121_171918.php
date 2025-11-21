// Last updated: 2025/11/21 下午5:19:18
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function findErrorNums($nums) {
        $n = count($nums);
        $expected_sum = $n * ($n + 1) / 2;
        $actual_sum = array_sum($nums);
        
        $expected_square_sum = $n * ($n + 1) * (2 * $n + 1) / 6;
        $actual_square_sum = array_reduce($nums, fn($sum, $num) => $sum + $num * $num, 0);
        
        $diff_xy = $actual_sum - $expected_sum;
        $square_diff_xy = $actual_square_sum - $expected_square_sum;
        $sum_xy = $square_diff_xy / $diff_xy;
        
        $duplicate = ($sum_xy + $diff_xy) / 2;
        $missing = $sum_xy - $duplicate;
        return [$duplicate, $missing];
    }
}