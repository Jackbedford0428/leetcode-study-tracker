// Last updated: 2026/8/22 下午3:12:32
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0, maxCount = 0;
5        for (int num : nums) {
6            if (num) {
7                if (++count > maxCount)
8                    maxCount = count;
9            } else
10                count = 0;
11        }
12        return maxCount;
13    }
14};