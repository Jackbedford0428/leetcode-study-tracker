// Last updated: 2026/9/7 下午5:17:21
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
14        ListNode *prev = nullptr;
15        for (ListNode *ptr = head; ptr != nullptr;) {
16            ListNode *next = ptr->next;
17            ptr->next = prev;
18            prev = ptr;
19            ptr = next;
20        }
21        return prev;
22    }
23};