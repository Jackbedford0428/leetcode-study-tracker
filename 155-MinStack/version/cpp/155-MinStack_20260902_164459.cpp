// Last updated: 2026/9/2 下午4:44:59
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        const int n = static_cast<int>(nums.size());
5        int low = 0, high = n; // high 取 n 而非 n - 1：插入點可能落在尾端之後
6        while (low < high) {
7            int middle = low + (high - low) / 2;
8            if (nums[middle] < target) low = middle + 1;
9            else high = middle;
10        }
11        if (low < n && nums[low] == target) return low; // 插入點未必真的是 target，需回頭確認
12        return -1;
13    }
14};