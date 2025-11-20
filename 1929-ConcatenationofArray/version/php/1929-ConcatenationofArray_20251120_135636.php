// Last updated: 2025/11/20 下午1:56:36
class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $n
     * @return Integer[]
     */
    function shuffle($nums, $n) {
        $ans = [];
        for ($i = 0; $i < $n; $i++) {
            $ans[] = $nums[$i];
            $ans[] = $nums[$i + $n];
        }
        return $ans;
    }
}