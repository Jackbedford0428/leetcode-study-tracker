// Last updated: 2026/9/14 下午2:16:27
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> cnt;
5        for (int num : nums)
6            ++cnt[num];
7
8        using Entry = pair<int, int>; // (freq, num)
9        priority_queue<Entry, vector<Entry>, greater<Entry>> min_pq;
10        for (const auto &[num, freq] : cnt)
11        {
12            // top() 判斷只是省下「不合格元素」的 pop+emplace；最壞情況（頻率遞增走訪）
13            // 每個元素都合格，仍要 pop+emplace，複雜度仍是 O(m log k)，非 O(k log k)
14            if (ssize(min_pq) < k)
15                min_pq.emplace(freq, num);
16            else if (freq > min_pq.top().first)
17            {
18                min_pq.pop();
19                min_pq.emplace(freq, num);
20            }
21        }
22
23        vector<int> ans(k);
24        int idx = k;
25        while (!min_pq.empty())
26        {
27            ans[--idx] = min_pq.top().second;
28            min_pq.pop();
29        }
30        return ans;
31    }
32};