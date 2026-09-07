// Last updated: 2026/9/7 下午5:00:09
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        queue<int> q;
15        for (ListNode *ptr = head; ptr != nullptr; ptr = ptr->next) {
16            q.push(ptr->val);
17        }
18        ListNode *rev_head = nullptr;
19        while (!q.empty()) {
20            rev_head = new ListNode(q.front(), rev_head);
21            q.pop();
22        }
23        return rev_head;
24    }
25};