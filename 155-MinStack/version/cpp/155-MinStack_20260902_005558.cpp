// Last updated: 2026/9/2 上午12:55:58
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        const int n = static_cast<int>(temperatures.size());
5            vector<int> ans(n);  // 預設 0 -> 故最後仍留在 stack 裡的日子不必再回填
6            stack<int> pending;  // 溫度單調遞減的索引堆疊
7            for (int i = 0; i < n; ++i) {
8                while (!pending.empty() && temperatures[i] > temperatures[pending.top()]) {
9                    int j = pending.top();
10                    pending.pop();
11                    ans[j] = i - j;
12                }
13                pending.push(i); // 將當前日子索引放入堆疊
14            }
15            return ans;
16    }
17};