// Last updated: 06/08/2026, 16:16:36
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
13    ListNode* swapPairs(ListNode* head) {
14        if (!head || !head->next) return head;
15
16        ListNode* second = head->next;
17
18        head->next = swapPairs(second->next);
19        second->next = head;
20
21        return second;
22    }
23};