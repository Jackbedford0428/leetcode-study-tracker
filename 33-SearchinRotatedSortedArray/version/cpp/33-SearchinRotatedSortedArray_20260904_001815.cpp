// Last updated: 2026/9/4 上午12:18:15
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = static_cast<int>(nums.size());
5        int low = 0, high = n - 1;
6        while (low < high) {
7            int middle = low + (high - low) / 2;
8            if (nums[middle] > nums[high]) low = middle + 1;
9            else high = middle;
10        }
11        int pivot = low;
12        high = n + pivot - 1;
13        while (low <= high) {
14            int middle = low + (high - low) / 2;
15            int index = middle < n ? middle : middle - n;
16            if (nums[index] < target) low = middle + 1;
17            else if (nums[index] > target) high = middle - 1;
18            else return index;
19        }
20        return -1;
21    }
22};