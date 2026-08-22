// Last updated: 2026/8/22 下午7:46:22
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int dup = 0, miss = 0;
5        for (int num : nums) {
6            int index = abs(num) - 1;
7            if (nums[index] < 0)
8                dup = abs(num);
9            else
10                nums[index] = -nums[index];
11        }
12        for (int i = 0; i < nums.size(); i++) {
13            if (nums[i] > 0) {
14                miss = i + 1;
15                break;
16            }
17        }
18        return {dup, miss};
19    }
20};