// Last updated: 2026/9/14 下午4:45:02
1class Solution {
2public:
3    int numIslands(vector<vector<char>>& grid) {
4        int m = static_cast<int>(grid.size());
5        int n = static_cast<int>(grid[0].size());
6        stack<pair<int, int>> pos;
7        int cnt = 0;
8        for (int i = 0; i < m; ++i) {
9            for (int j = 0; j < n; ++j) {
10                if (grid[i][j] == '1') {
11                    pos.emplace(i, j);
12                    ++cnt;
13                    while (!pos.empty()) {
14                        const auto [s, t] = pos.top();
15                        pos.pop();
16                        grid[s][t] = '0';
17                        if (s - 1 >= 0 && grid[s - 1][t] == '1')
18                            pos.emplace(s - 1, t);
19                        if (s + 1 < m && grid[s + 1][t] == '1')
20                            pos.emplace(s + 1, t);
21                        if (t - 1 >= 0 && grid[s][t - 1] == '1')
22                            pos.emplace(s, t - 1);
23                        if (t + 1 < n && grid[s][t + 1] == '1')
24                            pos.emplace(s, t + 1);
25                    }
26                }
27            }
28        }
29        return cnt;
30    }
31};