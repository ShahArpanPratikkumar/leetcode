// Last updated: 14/06/2026, 21:25:24
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        if (list1 == NULL) return list2;
5        if (list2 == NULL) return list1;
6
7        if (list1->val < list2->val) {
8            list1->next = mergeTwoLists(list1->next, list2);
9            return list1;
10        } else {
11            list2->next = mergeTwoLists(list1, list2->next);
12            return list2;
13        }
14    }
15};