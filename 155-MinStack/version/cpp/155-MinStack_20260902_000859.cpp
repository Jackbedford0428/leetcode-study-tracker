// Last updated: 2026/9/2 上午12:08:59
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = static_cast<int>(temperatures.size());
5        stack<int> wait;
6        vector<int> ans(n);
7        for (int i = 0; i < n; ++i) {
8            int t = temperatures[i], j;
9            if (!wait.empty()) j = wait.top();
10            while (!wait.empty() && t > temperatures[j]) {
11                ans[j] = i - j;
12                wait.pop();
13                if (!wait.empty()) j = wait.top();
14            }
15            // 把今天壓入
16            wait.push(i);
17        }
18        while (!wait.empty()) {
19            ans[wait.top()] = 0;
20            wait.pop();
21        }
22        return ans;
23    }
24};