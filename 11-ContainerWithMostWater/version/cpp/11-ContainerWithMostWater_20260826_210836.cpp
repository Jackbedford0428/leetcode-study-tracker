// Last updated: 2026/8/26 下午9:08:36
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int i = 0, j = static_cast<int>(height.size()) - 1;
5        int max_area = 0;
6        while (i < j) {
7            int area = min(height[i], height[j]) * (j - i);
8            if (area > max_area)
9                max_area = area;
10            if (height[i] < height[j])
11                i++;
12            else
13                j--;
14        }
15        return max_area;
16    }
17};