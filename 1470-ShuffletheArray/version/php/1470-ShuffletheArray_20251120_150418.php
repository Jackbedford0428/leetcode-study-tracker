// Last updated: 2025/11/20 下午3:04:18
class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $n
     * @return Integer[]
     */
    function shuffle($nums, $n) {
        $ans = array_fill(0, $n * 2, 0);
        for ($i = 0; $i < $n; $i++) {
            $ans[$i * 2] = $nums[$i];
            $ans[$i * 2 + 1] = $nums[$i + $n];
        }
        return $ans;
    }
}