// Last updated: 2025/12/10 下午2:59:50
1class Solution {
2
3    /**
4     * @param Integer[] $nums
5     * @return Integer[]
6     */
7    function smallerNumbersThanCurrent($nums) {
8        $count = array_fill(0, 101, 0);
9        
10        // 統計每個數字出現次數
11        foreach ($nums as $num) {
12            $count[$num]++;
13        }
14        
15        // 累加計數
16        for ($i = 1; $i <= 100; $i++) {
17            $count[$i] += $count[$i - 1];
18        }
19        
20        // 建立結果
21        $result = [];
22        foreach ($nums as $num) {
23            $result[] = ($num > 0) ? $count[$num - 1] : 0;
24        }
25        
26        return $result;
27    }
28}