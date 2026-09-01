// Last updated: 2026/9/2 上午12:32:58
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = static_cast<int>(temperatures.size());
5        vector<int> ans(n);
6        array<int, 101> next_warmer {};
7        for (int i = n - 1; i >= 0; --i) {
8            int t = temperatures[i];
9            int nearest = 100000;
10            for (int j = t + 1; j < 101; ++j) {
11                if (next_warmer[j] != 0) {
12                    nearest = min(nearest, next_warmer[j]);
13                }
14            }
15            if (nearest == 100000) ans[i] = 0;
16            else ans[i] = nearest - i;
17            next_warmer[t] = i;
18        }
19        return ans;
20    }
21};