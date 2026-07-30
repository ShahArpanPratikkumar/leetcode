// Last updated: 30/07/2026, 10:08:00
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode** curr = &head;
        
        while (*curr != nullptr) {
            if ((*curr)->val == val) {
                ListNode* temp = *curr;
                *curr = (*curr)->next; // Updates the 'next' pointer of the previous node (or head)
                delete temp;           // Free memory to prevent leaks
            } else {
                curr = &((*curr)->next); // Move to the address of the next pointer
            }
        }
        
        return head;
    }
};