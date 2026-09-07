// Last updated: 07/09/2026, 10:29:09
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
11    void deleteNode(ListNode* n1) {
12        ListNode* temp = n1->next;
13        n1->val = temp->val;
14
15        n1->next = temp->next;
16        temp->next = NULL;
17    }
18};