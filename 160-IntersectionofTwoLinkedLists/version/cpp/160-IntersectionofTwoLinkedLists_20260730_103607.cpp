// Last updated: 30/07/2026, 10:36:07
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
17        // Traverse both lists. When either pointer reaches the end (nullptr),
18        // redirect it to the head of the other list.
19        while (pA != pB) {
20            pA = (pA == nullptr) ? headB : pA->next;
21            pB = (pB == nullptr) ? headA : pB->next;
22        }
23
24        // pA (or pB) will either be the intersection node or nullptr if no intersection exists
25        return pA;
26    }
27};