// Last updated: 2026/9/7 下午5:11:08
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
14        stack<int> stk;
15        for (ListNode *ptr = head; ptr != nullptr; ptr = ptr->next) {
16            stk.push(ptr->val);
17        }
18        ListNode dummy;
19        ListNode *tail = &dummy;
20        while (!stk.empty()) {
21            tail->next = new ListNode(stk.top());
22            stk.pop();
23            tail = tail->next;
24        }
25        return dummy.next;
26    }
27};