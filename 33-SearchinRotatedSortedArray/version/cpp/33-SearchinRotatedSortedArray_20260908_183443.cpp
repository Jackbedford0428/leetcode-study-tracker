// Last updated: 2026/9/8 下午6:34:43
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
11    ListNode *detectCycle(ListNode *head) {
12        if (head == nullptr || head->next == nullptr)
13            return nullptr;
14        ListNode *slow = head, *fast = head;
15        while (fast != nullptr && fast->next != nullptr) {
16            slow = slow->next;
17            fast = fast->next->next;
18            if (slow == fast)
19                break;
20        }
21        if (slow != fast)
22            return nullptr;
23        slow = head;
24        while (slow != fast) {
25            slow = slow->next;
26            fast = fast->next;
27        }
28        return slow;
29    }
30};