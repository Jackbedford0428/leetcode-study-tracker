// Last updated: 2026/9/8 上午11:40:03
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = static_cast<int>(nums.size());
5        int low = 0, high = n - 1;
6        while (low < high) {
7            int mid = low + (high - low) / 2;
8            if (nums[mid] > nums[high])
9                low = mid + 1;
10            else
11                high = mid;
12        }
13        int pivot = low;
14        low = pivot;
15        high = pivot + n;
16        while (low < high) {
17            int mid = low + (high - low) / 2;
18            int index = mid < n ? mid : mid - n;
19            if (nums[index] < target)
20                low = mid + 1;
21            else
22                high = mid;
23        }
24        int index = low < n ? low : low - n;
25        if (index < n && nums[index] == target)
26            return index;
27        return -1;
28    }
29};