// Last updated: 16/07/2026, 23:55:56
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
13    ListNode* removeElements(ListNode* head, int val) {
14        ListNode** curr = &head;
15        
16        while (*curr != nullptr) {
17            if ((*curr)->val == val) {
18                ListNode* temp = *curr;
19                *curr = (*curr)->next; // Updates the 'next' pointer of the previous node (or head)
20                delete temp;           // Free memory to prevent leaks
21            } else {
22                curr = &((*curr)->next); // Move to the address of the next pointer
23            }
24        }
25        
26        return head;
27    }
28};