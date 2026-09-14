// Last updated: 2026/9/14 上午11:42:13
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> cnt;
5        for (int num : nums)
6            ++cnt[num];
7        priority_queue<pair<int, int>> max_pq;
8        for (const auto& [k, v] : cnt)
9            max_pq.emplace(v, k);
10        vector<int> ans;
11        ans.reserve(k);
12        for (int i = 0; i < k; ++i) {
13            ans.push_back(max_pq.top().second);
14            max_pq.pop();
15        }
16        return ans;
17    }
18};