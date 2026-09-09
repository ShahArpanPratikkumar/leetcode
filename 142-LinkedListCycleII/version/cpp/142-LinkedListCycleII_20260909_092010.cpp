// Last updated: 09/09/2026, 09:20:10
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
11    ListNode *detectCycle(ListNode *head) {
12        ListNode *slow = head, *fast = head;
13        
14        while (fast && fast->next) {
15            slow = slow->next;
16            fast = fast->next->next;
17            
18            if (slow == fast) {
19                slow = head;
20                while (slow != fast) {
21                    slow = slow->next;
22                    fast = fast->next;
23                }
24                return slow;
25            }
26        }
27        
28        return nullptr;
29    }
30};