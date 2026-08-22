// Last updated: 2026/8/22 下午3:26:46
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0, maxCount = 0;
5        for (int num : nums) {
6            count = num ? count + 1 : 0;
7            maxCount = max(maxCount, count);
8        }
9        return maxCount;
10    }
11};