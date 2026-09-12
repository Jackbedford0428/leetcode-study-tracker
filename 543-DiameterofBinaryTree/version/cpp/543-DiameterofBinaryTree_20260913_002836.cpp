// Last updated: 2026/9/13 上午12:28:36
1class KthLargest
2{
3private:
4    priority_queue<int, vector<int>, greater<int>> min_pq;
5    int k;
6
7public:
8    KthLargest(int k, vector<int> &nums) : k{k}
9    {
10        // this->k = k; // 與 memeber initializer list 擇一使用
11        for (int num : nums)
12            add(num);
13    }
14
15    int add(int val)
16    {
17        if (ssize(min_pq) < k)
18            min_pq.push(val);
19        else if (val > min_pq.top())
20        {
21            min_pq.pop();
22            min_pq.push(val);
23        }
24        return min_pq.top();
25    }
26};
27
28/**
29 * Your KthLargest object will be instantiated and called as such:
30 * KthLargest* obj = new KthLargest(k, nums);
31 * int param_1 = obj->add(val);
32 */