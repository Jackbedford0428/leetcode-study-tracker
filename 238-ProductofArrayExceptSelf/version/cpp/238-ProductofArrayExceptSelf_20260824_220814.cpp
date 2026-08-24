// Last updated: 2026/8/24 下午10:08:14
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
5            return !(isalnum(c));
6        }), s.end());
7        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
8            return tolower(c);
9        });
10        int i = 0, j = s.size() - 1;
11        while (i < j) {
12            if (s[i] != s[j])
13                return false;
14            i++;
15            j--;
16        }
17        return true;
18    }
19};