// Last updated: 05/08/2026, 13:55:58
1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4        vector<int> values;
5        
6        // Copy linked list values into a vector
7        ListNode* current = head;
8        while (current != nullptr) {
9            values.push_back(current->val);
10            current = current->next;
11        }
12        
13        // Use two pointers to check for palindrome
14        int left = 0;
15        int right = values.size() - 1;
16        while (left < right) {
17            if (values[left] != values[right]) {
18                return false;
19            }
20            left++;
21            right--;
22        }
23        
24        return true;
25    }
26};