// Last updated: 2025/11/21 下午5:20:11
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function findErrorNums($nums) {
        $seen = [];
        $duplicate = 0;
        
        foreach ($nums as $num) {
            if (isset($seen[$num])) {
                $duplicate = $num;
            }
            $seen[$num] = true;
        }
        
        $missing = 0;
        for ($i = 1; $i <= count($nums); $i++) {
            if (!isset($seen[$i])) {
                $missing = $i;
                break;
            }
        }
        
        return [$duplicate, $missing];
    }
}