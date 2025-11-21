// Last updated: 2025/11/21 下午5:20:31
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function findErrorNums($nums) {
        $counts = array_count_values($nums);
        $duplicate = array_search(2, $counts);
        $missing = array_values(array_diff(range(1, count($nums)), array_keys($counts)))[0];
        return [$duplicate, $missing];
    }
}