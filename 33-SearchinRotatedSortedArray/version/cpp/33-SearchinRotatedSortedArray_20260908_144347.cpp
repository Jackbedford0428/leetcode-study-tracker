// Last updated: 2026/9/8 下午2:43:47
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
16        for (ListNode *ptr1 = list1, *ptr2 = list2; ptr1 != nullptr || ptr2 != nullptr;) {
17            if (ptr1 != nullptr && ptr2 == nullptr) {
18                tail->next = new ListNode(ptr1->val);
19                ptr1 = ptr1->next;
20            } else if (ptr1 == nullptr && ptr2 != nullptr) {
21                tail->next = new ListNode(ptr2->val);
22                ptr2 = ptr2->next;
23            } else if (ptr1->val < ptr2->val) {
24                tail->next = new ListNode(ptr1->val);
25                ptr1 = ptr1->next;
26            } else {
27                tail->next = new ListNode(ptr2->val);
28                ptr2 = ptr2->next;
29            }
30            tail = tail->next;
31        }
32        return dummy.next;
33    }
34};