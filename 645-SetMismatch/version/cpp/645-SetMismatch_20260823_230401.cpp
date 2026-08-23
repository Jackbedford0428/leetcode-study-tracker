// Last updated: 2026/8/23 下午11:04:01
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int dup, miss, i = 0;
5        while (i < nums.size()) {
6            int correct_index = nums[i] - 1;
7            if (nums[i] != nums[correct_index])
8                swap(nums[i], nums[correct_index]);
9            else
10                i++;
11        }
12        for (int i = 0; i < nums.size(); i++) {
13            if (nums[i] != i + 1) {
14                dup = nums[i];
15                miss = i + 1;
16                break;
17            }
18        }
19        return {dup, miss};
20    }
21};