// Last updated: 12/08/2026, 13:41:04
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
13    ListNode* removeNodes(ListNode* head) {
14        if (!head || !head->next) return head;
15        
16        head->next = removeNodes(head->next);
17        
18        if (head->val < head->next->val) {
19            return head->next;
20        }
21        
22        return head;
23    }
24};