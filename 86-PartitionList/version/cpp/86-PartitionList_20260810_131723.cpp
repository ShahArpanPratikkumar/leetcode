// Last updated: 10/08/2026, 13:17:23
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
13    ListNode* partition(ListNode* head, int x) {
14        ListNode lessHead(0), greaterHead(0);
15        ListNode *less = &lessHead, *greater = &greaterHead;
16
17        while (head) {
18            if (head->val < x) {
19                less->next = head;
20                less = less->next;
21            } else {
22                greater->next = head;
23                greater = greater->next;
24            }
25            head = head->next;
26        }
27
28        greater->next = nullptr;
29        less->next = greaterHead.next;
30
31        return lessHead.next;
32    }
33};