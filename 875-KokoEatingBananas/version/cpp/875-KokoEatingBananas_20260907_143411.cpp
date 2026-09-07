// Last updated: 2026/9/7 下午2:34:11
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
15        if (head == nullptr) return head;
16        for (ListNode *ptr = head; ptr != nullptr; ptr = ptr->next) {
17            stk.push(ptr->val);
18        }
19        ListNode *rev_head = new ListNode(stk.top());
20        stk.pop();
21        ListNode *tail = rev_head;
22        while (!stk.empty()) {
23            ListNode *new_node = new ListNode(stk.top());
24            stk.pop();
25            tail->next = new_node;
26            tail = tail->next;
27        }
28        return rev_head;
29    }
30};