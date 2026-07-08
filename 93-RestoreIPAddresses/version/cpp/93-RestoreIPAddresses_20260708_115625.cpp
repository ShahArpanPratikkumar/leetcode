// Last updated: 08/07/2026, 11:56:25
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4        ListNode* prev = nullptr;
5        ListNode* curr = head;
6        
7        while (curr != nullptr) {
8            ListNode* nextNode = curr->next; // Save the next node
9            curr->next = prev;              // Reverse the link
10            prev = curr;                    // Move prev forward
11            curr = nextNode;                // Move curr forward
12        }
13        
14        return prev; // prev will be pointing to the new head
15    }
16};