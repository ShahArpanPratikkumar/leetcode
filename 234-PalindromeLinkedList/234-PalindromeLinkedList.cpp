// Last updated: 30/07/2026, 10:07:45
#include <vector>

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
    bool isPalindrome(ListNode* head) {
        std::vector<int> values;
        
        // Step 1: Copy all linked list values into a vector
        ListNode* current = head;
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }
        
        // Step 2: Use two pointers to check if the vector is a palindrome
        int left = 0;
        int right = values.size() - 1;
        
        while (left < right) {
            if (values[left] != values[right]) {
                return false; // Found a mismatch
            }
            left++;
            right--;
        }
        
        return true; // All values matched perfectly
    }
};