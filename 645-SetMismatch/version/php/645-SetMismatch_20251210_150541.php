// Last updated: 2025/12/10 下午3:05:41
1class Solution {
2
3    /**
4     * @param Integer[] $nums
5     * @return Integer[]
6     */
7    function smallerNumbersThanCurrent($nums) {
8        $count = [];
9        foreach ($nums as $num) {
10            $count[$num] = ($count[$num] ?? 0) + 1;
11            // ?? 是 null 合併運算子：不存在則回傳 0
12        }
13        
14        // 按 key 排序（PHP 關聯陣列可直接用 ksort）
15        ksort($count);
16        
17        // 假設 nums = [4, 1, 2, 2, 5]
18        // count -> [4=>1, 1=>1, 2=>2, 5=>1]
19        // ksort 後 -> [1=>1, 2=>2, 4=>1, 5=>1]
20        
21        // 建立映射：數字 -> 有多少數字比它小
22        $smaller = [];
23        $total = 0;
24        foreach ($count as $key => $cnt) {
25            $smaller[$key] = $total;
26            $total += $cnt;
27        }
28        
29        // smaller -> [1=>0, 2=>1, 4=>3, 5=>4]
30        $result = [];
31        foreach ($nums as $num) {
32            $result[] = $smaller[$num];
33        }
34        return $result;
35    }
36}