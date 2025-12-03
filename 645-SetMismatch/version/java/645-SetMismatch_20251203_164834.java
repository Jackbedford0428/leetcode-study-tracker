// Last updated: 2025/12/3 下午4:48:34
1class Solution {
2    public int[] smallerNumbersThanCurrent(int[] nums) {
3        int n = nums.length;
4        int[][] indexed = new int[n][2];
5        for (int i = 0; i < n; i++) {
6            indexed[i][0] = nums[i];  // value
7            indexed[i][1] = i;         // original index
8        }
9        
10        Arrays.sort(indexed, (a, b) -> Integer.compare(a[0], b[0]));
11        
12        int[] result = new int[n];
13        for (int i = 0; i < n; i++) {
14            if (i > 0 && indexed[i][0] == indexed[i - 1][0]) {
15                result[indexed[i][1]] = result[indexed[i - 1][1]];
16            } else {
17                result[indexed[i][1]] = i;
18            }
19        }
20        return result;
21    }
22}