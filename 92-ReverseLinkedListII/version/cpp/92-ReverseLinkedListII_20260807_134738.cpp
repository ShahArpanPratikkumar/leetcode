// Last updated: 07/08/2026, 13:47:38
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        if (!head || left == right) return head;
15
16        ListNode dummy(0);
17        dummy.next = head;
18        ListNode* prev = &dummy;
19
20        for (int i = 0; i < left - 1; ++i) {
21            prev = prev->next;
22        }
23
24        ListNode* curr = prev->next;
25        for (int i = 0; i < right - left; ++i) {
26            ListNode* temp = curr->next;
27            curr->next = temp->next;
28            temp->next = prev->next;
29            prev->next = temp;
30        }
31
32        return dummy.next;
33    }
34};