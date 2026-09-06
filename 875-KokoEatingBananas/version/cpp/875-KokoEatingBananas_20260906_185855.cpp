// Last updated: 2026/9/6 下午6:58:55
1class Solution {
2public:
3    int minEatingSpeed(vector<int>& piles, int h) {
4        int max_pile = *max_element(piles.begin(), piles.end());
5        int n = static_cast<int>(piles.size());
6        // vector<int> speeds(max_pile + 1);
7        // iota(speeds.begin(), speeds.end(), 0);
8        int low = 1, high = max_pile + 1;
9        while (low < high) {
10            int mid = low + (high - low) / 2;
11            // int speed = speeds[mid], need = 0;
12            long long need = 0;
13            for (int pile : piles) {
14                need += (static_cast<long long>(pile) + mid - 1) / mid;
15            }
16            if (need > h)
17                low = mid + 1;
18            else
19                high = mid;
20        }
21        return low;
22    }
23};