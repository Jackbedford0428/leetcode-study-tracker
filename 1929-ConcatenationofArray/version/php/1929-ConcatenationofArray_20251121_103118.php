// Last updated: 2025/11/21 上午10:31:18
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function findMaxConsecutiveOnes($nums) {
        $maxCount = 0;
        $currentCount = 0;
        for ($i = 0; $i < count($nums); $i++) {
            if ($nums[$i] === 1) {
                $currentCount++;
                $maxCount = max($maxCount, $currentCount);
            } else {
                $currentCount = 0;
            }
        }
        return $maxCount;
    }
}