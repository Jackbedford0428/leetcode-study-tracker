// Last updated: 2026/9/14 下午2:26:09
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> cnt;
5        for (int num : nums)
6            ++cnt[num];
7
8        int n = static_cast<int>(nums.size());
9        vector<vector<int>> buckets(n + 1);
10        for (const auto &[num, freq] : cnt) {
11            buckets[freq].push_back(num);
12        }
13
14        vector<int> ans;
15        ans.reserve(k);
16        for (int freq = n; freq >= 0 && ssize(ans) < k; --freq) {
17            for (int num : buckets[freq]) {
18                ans.push_back(num);
19                if (ssize(ans) == k)
20                    break;
21            }
22        }
23        return ans;
24    }
25};