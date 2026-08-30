// Last updated: 2026/8/30 上午11:33:10
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        array<int, 26> need, window;
5        need.fill(0);
6        window.fill(0);
7        for (char c : s1) {
8            ++need[c - 'a'];
9        }
10        int matches = 0;
11        for (int i = 0; i < 26; i++) {
12            if (need[i] == 0) {
13                ++matches;
14            }
15        }
16        for (int right = 0; right < s2.size(); ++right) {
17            char rc = s2[right];
18            ++window[rc - 'a'];
19            if (window[rc - 'a'] == need[rc - 'a']) {
20                ++matches;
21            } else if (window[rc - 'a'] == need[rc - 'a'] + 1) {
22                --matches;
23            }
24            int left = right - s1.size();
25            if (left >= 0) {
26                char lc = s2[left];
27                --window[lc - 'a'];
28                if (window[lc - 'a'] == need[lc - 'a']) {
29                    ++matches;
30                } else if (window[lc - 'a'] == need[lc - 'a'] - 1) {
31                    --matches;
32                }
33            }
34            if (right >= s1.size() - 1 && matches == 26) {
35                return true;
36            }
37        }
38        return false;
39    }
40};