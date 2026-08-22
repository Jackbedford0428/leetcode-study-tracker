// Last updated: 2026/8/22 下午3:20:09
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0, maxCount = 0;
5        for (int num : nums) {
6            if (num)
7                maxCount = max(maxCount, ++count);
8            else
9                count = 0;
10        }
11        return maxCount;
12    }
13};