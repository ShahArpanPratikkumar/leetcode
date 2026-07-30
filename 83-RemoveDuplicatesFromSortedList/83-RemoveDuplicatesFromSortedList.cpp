// Last updated: 30/07/2026, 10:08:38


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->val == curr->next->val)
                curr->next = curr->next->next; // skip duplicate
            else
                curr = curr->next; // move to next
        }
        return head;
    }
};