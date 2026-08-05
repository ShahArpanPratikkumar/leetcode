// Last updated: 05/08/2026, 13:26:43
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
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        if (!headA || !headB) return nullptr;
13
14        ListNode *pA = headA;
15        ListNode *pB = headB;
16
17        while (pA != pB) {
18            pA = (pA == nullptr) ? headB : pA->next;
19            pB = (pB == nullptr) ? headA : pB->next;
20        }
21
22        return pA;
23    }
24};