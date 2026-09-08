// Last updated: 2026/9/8 下午5:41:57
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
12        if (head == nullptr)
13            return false;
14        ListNode *slow = head, *fast = head->next;
15        while (slow != nullptr && fast != nullptr) {
16            if (slow == fast)
17                return true;
18            slow = slow->next;
19            if (fast->next != nullptr)
20                fast = fast->next->next;
21            else
22                return false;
23        }
24        return false;
25    }
26};