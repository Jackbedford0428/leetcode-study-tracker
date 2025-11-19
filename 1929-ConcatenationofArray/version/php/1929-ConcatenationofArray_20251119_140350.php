// Last updated: 2025/11/19 下午2:03:50
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[]
     */
    function getConcatenation($nums) {
        // 寫法 1: array_merge 函式 (Built-in array function)
        // ✅✅✅ Idiomatic: PHP 標準做法
        // ⚡⚡⚡ Performance: 最快（原生 C 實作）
        // return array_merge($nums, $nums);

        // 寫法 2: 傳統 for 迴圈 (Traditional for loop)
        // ✅ Idiomatic: PHP 中常見的寫法
        // ⚡⚡ Performance: 中等
        // $n = count($nums);
        // $ans = array_fill(0, $n * 2, 0);
        // for ($i = 0; $i < $n; $i++) {
        //     $ans[$i] = $nums[$i];
        //     $ans[$i + $n] = $nums[$i];
        // }
        // return $ans;
        
        // 寫法 3: foreach 迴圈 (PHP's foreach)
        // ✅ Idiomatic: PHP 風格，但需手動索引
        // ⚡⚡ Performance: 中等
        // $n = count($nums);
        // $ans = array_fill(0, $n * 2, 0);
        // $i = 0;
        // foreach ($nums as $num) {
        //     $ans[$i] = $num;
        //     $ans[$i + $n] = $num;
        //     $i++;
        // }
        // return $ans;
        
        // 寫法 4: 展開運算子 (PHP 7.4+ spread operator)
        // ✅✅ Idiomatic: 現代 PHP 簡潔寫法
        // ⚡⚡⚡ Performance: 與 array_merge 相近
        return [...$nums, ...$nums];
        
        // 寫法 5: array_splice（不常用）
        // ⚠️ Idiomatic: 不推薦（語意不清晰）
        // ⚡ Performance: 較慢
        // $ans = $nums;
        // array_splice($ans, count($ans), 0, $nums);
        // return $ans;
    }
}
