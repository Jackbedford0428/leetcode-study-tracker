// Last updated: 2026/9/7 下午7:27:20
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
14        if (head == nullptr || head->next == nullptr)
15            return head;
16        ListNode *new_head = reverseList(head->next);
17        head->next->next = head;
18        head->next = nullptr;
19        return new_head;
20    }
21};