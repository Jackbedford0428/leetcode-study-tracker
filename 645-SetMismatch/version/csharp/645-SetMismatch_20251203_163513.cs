// Last updated: 2025/12/3 下午4:35:13
1public class Solution {
2    public int[] SmallerNumbersThanCurrent(int[] nums) {
3        var indexed = nums.Select((num, idx) => (num, idx)).OrderBy(x => x.num).ToList();
4        int[] result = new int[nums.Length];
5        
6        for (int i = 0; i < indexed.Count; i++) {
7            if (i > 0 && indexed[i].num == indexed[i - 1].num) {
8                result[indexed[i].idx] = result[indexed[i - 1].idx];
9            } else {
10                result[indexed[i].idx] = i;
11            }
12        }
13        return result;
14    }
15}