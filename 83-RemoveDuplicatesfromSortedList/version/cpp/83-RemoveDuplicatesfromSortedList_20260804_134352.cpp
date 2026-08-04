// Last updated: 04/08/2026, 13:43:52
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode* curr = head;
5        while (curr && curr->next) {
6            if (curr->val == curr->next->val)
7                curr->next = curr->next->next; 
8            else
9                curr = curr->next; 
10        }
11        return head;
12    }
13};