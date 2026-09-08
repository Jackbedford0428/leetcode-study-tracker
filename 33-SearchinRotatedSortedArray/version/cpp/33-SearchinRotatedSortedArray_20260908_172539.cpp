// Last updated: 2026/9/8 下午5:25:39
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) {
12        unordered_set<ListNode *> seen;
13        for (ListNode *curr = head; curr != nullptr;) {
14            if (seen.contains(curr))
15                return true;
16            seen.insert(curr);
17            curr = curr->next;
18        }
19        return false;
20    }
21};