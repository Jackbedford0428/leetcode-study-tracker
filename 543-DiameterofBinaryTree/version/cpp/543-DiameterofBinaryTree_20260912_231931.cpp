// Last updated: 2026/9/12 下午11:19:31
1class KthLargest {
2private:
3    std::priority_queue<int, vector<int>, greater<int>> min_pq;
4    int max_k;
5public:
6    KthLargest(int k, vector<int>& nums) {
7        max_k = k;
8        int n = static_cast<int>(nums.size());
9        for (int i = 0; i < n; ++i) {
10            if (i < k)
11                min_pq.push(nums[i]);
12            else if (nums[i] > min_pq.top()) {
13                min_pq.pop();
14                min_pq.push(nums[i]);
15            }
16        }
17    }
18    
19    int add(int val) {
20        if (min_pq.size() == max_k - 1)
21            min_pq.push(val);
22        else if (val > min_pq.top()) {
23            min_pq.pop();
24            min_pq.push(val);
25        }
26        return min_pq.top();
27    }
28};
29
30/**
31 * Your KthLargest object will be instantiated and called as such:
32 * KthLargest* obj = new KthLargest(k, nums);
33 * int param_1 = obj->add(val);
34 */