// Last updated: 2025/11/21 下午5:19:50
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function findErrorNums($nums) {
        $duplicate = 0;
        foreach ($nums as $num) {
            $index = abs($num) - 1;
            if ($nums[$index] < 0) {
                $duplicate = abs($num);
            } else {
                $nums[$index] = -$nums[$index];
            }
        }
        
        $missing = 0;
        for ($i = 0; $i < count($nums); $i++) {
            if ($nums[$i] > 0) {
                $missing = $i + 1;
                break;
            }
        }
        return [$duplicate, $missing];
    }
}