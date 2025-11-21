// Last updated: 2025/11/21 下午5:21:13
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function findErrorNums($nums) {
        sort($nums);
        $duplicate = 0;
        for ($i = 1; $i < count($nums); $i++) {
            if ($nums[$i] == $nums[$i - 1]) {
                $duplicate = $nums[$i];
                break;
            }
        }
        
        $n = count($nums);
        $expected_sum = $n * ($n + 1) / 2;
        $actual_sum = array_sum($nums);
        $missing = $expected_sum - $actual_sum + $duplicate;
        
        return [$duplicate, $missing];
    }
}