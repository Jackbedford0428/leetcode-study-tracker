// Last updated: 2026/9/8 上午11:20:02
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = static_cast<int>(nums.size());
5            int low = 0, high = n - 1;
6            while (low < high)
7            {
8                int middle = low + (high - low) / 2;
9                if (nums[middle] > nums[high])
10                    low = middle + 1;
11                else
12                    high = middle;
13            }
14            int pivot = low;
15            low = pivot;
16            high = pivot + n; // 左閉右開：range 為 [pivot, pivot+n)，恰好 n 個虛擬位置
17            while (low < high)
18            {
19                int middle = low + (high - low) / 2;
20                int index = middle < n ? middle : middle - n;
21                if (nums[index] < target)
22                    low = middle + 1;
23                else
24                    high = middle;
25            }
26            // low 收斂到「第一個 nums[index] >= target」的位置，還須驗證是否真的相等
27            int index = low < n ? low : low - n;
28            if (index < n && nums[index] == target)
29                return index;
30            return -1;
31    }
32};