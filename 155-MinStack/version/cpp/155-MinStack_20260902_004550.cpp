// Last updated: 2026/9/2 上午12:45:50
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        const int n = static_cast<int>(temperatures.size());
5            vector<int> ans(n);
6            for (int i = n - 2; i >= 0; --i) {
7                int j = i + 1;
8                while (temperatures[j] <= temperatures[i] && ans[j] > 0) {
9                    j += ans[j];
10                }
11                if (temperatures[j] > temperatures[i]) ans[i] = j - i; // ans[j] == 0 代表 j 之後無更熱的日子
12            }
13            return ans;
14    }
15};