// Last updated: 2025/11/21 上午10:30:59
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function findMaxConsecutiveOnes($nums) {
        $maxCount = 0;
        $currentCount = 0;
        foreach ($nums as $num) {
            if ($num === 1) {
                $currentCount++;
                $maxCount = max($maxCount, $currentCount);
            } else {
                $currentCount = 0;
            }
        }
        return $maxCount;
    }
}