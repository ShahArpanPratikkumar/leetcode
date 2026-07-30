// Last updated: 30/07/2026, 10:08:02
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // Save the next node
            curr->next = prev;              // Reverse the link
            prev = curr;                    // Move prev forward
            curr = nextNode;                // Move curr forward
        }
        
        return prev; // prev will be pointing to the new head
    }
};