// Last updated: 2026/9/14 下午1:46:31
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
12            if (ssize(min_pq) < k)
13                min_pq.emplace(freq, num);
14            else if (freq > min_pq.top().first)
15            {
16                min_pq.pop();
17                min_pq.emplace(freq, num);
18            }
19        }
20
21        vector<int> ans;
22        ans.reserve(k);
23        while (!min_pq.empty())
24        {
25            ans.push_back(min_pq.top().second);
26            min_pq.pop();
27        }
28        // reverse(ans.begin(), ans.end());
29        return ans;
30    }
31};