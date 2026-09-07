// Last updated: 07/09/2026, 13:37:59
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
13    ListNode* middleNode(ListNode* head) {
14        int size = 0;
15        ListNode* temp = head;
16        while (temp != nullptr) {
17            size++;
18            temp = temp->next;
19        }
20        
21        int mid = size / 2;
22        int count = 0;
23        ListNode* i = head;
24        while (count < mid) {
25            i = i->next;
26            count++;
27        }
28        return i;
29    }
30};