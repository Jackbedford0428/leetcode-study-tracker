// Last updated: 2026/9/8 下午4:54:31
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
14        if (list1 == nullptr)
15            return list2;
16        if (list2 == nullptr)
17            return list1;
18        if (list1->val <= list2->val)
19        {
20            list1->next = mergeTwoLists(list1->next, list2);
21            return list1;
22        }
23        else
24        {
25            list2->next = mergeTwoLists(list1, list2->next);
26            return list2;
27        }
28    }
29};