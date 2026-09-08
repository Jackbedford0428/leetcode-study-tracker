// Last updated: 2026/9/8 下午4:28:03
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
15            ListNode *tail = &dummy;
16            for (ListNode *curr1 = list1, *curr2 = list2; curr1 != nullptr || curr2 != nullptr;)
17            {
18                ListNode *selected;
19                if (curr1 == nullptr)
20                {
21                    selected = curr2;
22                    curr2 = curr2->next;
23                }
24                else if (curr2 == nullptr || curr1->val <= curr2->val)
25                {
26                    selected = curr1;
27                    curr1 = curr1->next;
28                }
29                else
30                {
31                    selected = curr2;
32                    curr2 = curr2->next;
33                }
34                tail->next = new ListNode(selected->val);
35                tail = tail->next;
36            }
37            return dummy.next;
38    }
39};