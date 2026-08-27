// Last updated: 2026/8/27 下午2:24:17
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int prefix_min = prices[0];
5        int profit = 0;
6        for(int i = 1; i < static_cast<int>(prices.size()); i++) {
7            int now = prices[i];
8            int spread = now - prefix_min;
9            if (spread > profit)
10                profit = spread;
11            if (now < prefix_min)
12                prefix_min = now;
13        }
14        return profit;
15    }
16};