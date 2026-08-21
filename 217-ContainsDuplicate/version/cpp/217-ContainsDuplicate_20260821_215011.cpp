// Last updated: 2026/8/21 下午9:50:11
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> seen;
5        for (int num : nums) {
6            if (!seen.insert(num).second)
7                return true;
8        }
9        return false;
10    }
11};