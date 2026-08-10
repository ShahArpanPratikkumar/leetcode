// Last updated: 10/08/2026, 13:16:39
1class Solution {
2public:
3    ListNode* rotateRight(ListNode* head, int k) {
4        if (!head || !head->next || k == 0) return head;
5
6        int len = 1;
7        ListNode* tail = head;
8        while (tail->next) {
9            tail = tail->next;
10            len++;
11        }
12
13        tail->next = head;
14
15        k = k % len;
16        for (int i = 0; i < len - k - 1; i++) {
17            head = head->next;
18        }
19
20        ListNode* newHead = head->next;
21        head->next = nullptr;
22
23        return newHead;
24    }
25};