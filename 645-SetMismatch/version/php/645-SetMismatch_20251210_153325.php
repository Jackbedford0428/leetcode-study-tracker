// Last updated: 2025/12/10 下午3:33:25
1class Solution {
2
3    /**
4     * @param Integer[] $nums
5     * @return Integer[]
6     */
7    function smallerNumbersThanCurrent($nums) {
8        $indexed = $nums;
9        asort($indexed);  // 保持索引關聯的排序
10
11        // $nums = [4, 1, 3, 2]
12        // $indexed = [4, 1, 3, 2] 隱含索引 [0=>4, 1=>1, 2=>3, 3=>2]
13        // asort 後 -> [1=>1, 3=>2, 4=>3, 0=>4]
14
15        $result = array_fill(0, count($nums), 0);
16        $rank = 0;
17        $prev = null;
18        
19        foreach ($indexed as $idx => $val) {
20            if ($val !== $prev) {
21                // array_values($indexed) - 取出所有 value，重新索引為 0, 1, 2...
22                // array_search($val, $arr) - 在陣列中搜尋 $val，回傳第一個匹配的 key
23                // 
24                // 範例：$indexed = [1=>1, 3=>2, 2=>3, 0=>4]（asort 後保持原 key）
25                //       array_values($indexed) = [1, 2, 3, 4]（重新索引 0,1,2,3）
26                //       array_search(2, [1,2,3,4]) = 1（值 2 在索引 1 的位置）
27                // 
28                // 這樣就能得到該值在「排序後陣列」中的位置（即有多少數比它小）
29                $rank = array_search($val, array_values($indexed));
30                $prev = $val;
31            }
32            $result[$idx] = $rank;
33        }
34        return $result;
35    }
36}