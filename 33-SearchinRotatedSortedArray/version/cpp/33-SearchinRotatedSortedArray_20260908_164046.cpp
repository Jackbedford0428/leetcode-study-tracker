// Last updated: 2026/9/8 下午4:40:46
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode dummy;
15        ListNode *tail = &dummy;
16        while (list1 != nullptr && list2 != nullptr) {
17            if (list1->val <= list2->val) {
18                tail->next = list1;
19                list1 = list1->next;
20            } else {
21                tail->next = list2;
22                list2 = list2->next;
23            }
24            tail = tail->next;
25        }
26        tail->next = list1 != nullptr ? list1 : list2;
27        return dummy.next;
28    }
29};