// Last updated: 2026/8/25 上午12:22:03
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int i = 0, j = static_cast<int>(s.size()) - 1;
5        while (i < j) {
6            while (i < j && !isalnum(s[i]))
7                i++;
8            while (i < j && !isalnum(s[j]))
9                j--;
10            if (tolower(s[i]) != tolower(s[j]))
11                return false;
12            i++;
13            j--;
14        }
15        return true;
16    }
17};