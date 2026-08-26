// Last updated: 2026/8/27 上午2:46:45
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0, right = static_cast<int>(height.size()) - 1;
5        int best = 0;
6        while(left < right) {
7            int hl = height[left], hr = height[right];
8            best = max(best, min(hl, hr) * (right - left));
9            if (hl < hr)
10                while(left < right && height[++left] <= hl);
11            else
12                while(left < right && height[--right] <= hr);
13        }
14        return best;
15    }
16};