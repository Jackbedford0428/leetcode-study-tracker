// Last updated: 2026/8/31 下午5:25:21
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> left;
5        for (char c : s) {
6            if (c == '(' || c == '[' || c == '{') left.push(c);
7            if (c == ')' || c == ']' || c == '}') {
8                if (left.empty()) return false;
9                char lc = left.top();
10                left.pop();
11                if (lc == '(' && c != ')') return false;
12                else if (lc == '[' && c != ']') return false;
13                else if (lc == '{' && c != '}') return false;
14            }
15        }
16        if (left.empty()) return true;
17        else return false;
18    }
19};