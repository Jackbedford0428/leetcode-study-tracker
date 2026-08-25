// Last updated: 2026/8/25 下午2:24:00
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int i = 0, j = static_cast<int>(numbers.size()) - 1;
5        while(i < j) {
6            int sum = numbers[i] + numbers[j];
7            if (sum < target)
8                i++;
9            else if (sum > target)
10                j--;
11            else
12                return {i + 1, j + 1};
13        }
14        return {};
15    }
16};