// Last updated: 2025/12/12 上午9:16:40
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> result;
5        for (int num : nums) {
6            if (nums[abs(num) - 1] > 0) {
7                nums[abs(num) - 1] *= -1;
8            }
9        }
10        for (int i = 0; i < nums.size(); i++) {
11            if (nums[i] > 0) {
12                result.push_back(i + 1);
13            }
14        }
15        return result;
16    }
17};