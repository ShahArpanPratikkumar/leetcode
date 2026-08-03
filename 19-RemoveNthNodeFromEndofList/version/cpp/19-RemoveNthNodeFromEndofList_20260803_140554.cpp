// Last updated: 03/08/2026, 14:05:54
1class Solution {
2public:
3    ListNode* removeNthFromEnd(ListNode* head, int n) {
4        ListNode dummy(0, head);
5        ListNode* fast = &dummy;
6        ListNode* slow = &dummy;
7
8        for (int i = 0; i < n; i++) {
9            fast = fast->next;
10        }
11
12        while (fast->next != nullptr) {
13            fast = fast->next;
14            slow = slow->next;
15        }
16
17        ListNode* toDelete = slow->next;
18        slow->next = slow->next->next;
19        delete toDelete;
20
21        return dummy.next;
22    }
23};