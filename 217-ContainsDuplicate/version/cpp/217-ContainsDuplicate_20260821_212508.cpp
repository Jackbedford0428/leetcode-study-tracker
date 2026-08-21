// Last updated: 2026/8/21 下午9:25:08
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> seen;
5        for (int num : nums) {
6            if (seen.contains(num))
7                return true;
8            seen.insert(num);
9        }
10        return false;
11    }
12};