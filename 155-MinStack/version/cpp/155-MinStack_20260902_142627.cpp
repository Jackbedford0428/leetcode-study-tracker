// Last updated: 2026/9/2 下午2:26:27
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        const int n = static_cast<int>(nums.size());
5        int low = 0, high = n - 1;
6        while (low <= high) {
7            int middle = low + (high - low) / 2; // 防止 overflow 的中點公式
8            if (target > nums[middle]) low = middle + 1;
9            else if (target < nums[middle]) high = middle - 1;
10            else return middle;
11        }
12        return -1;
13    }
14};