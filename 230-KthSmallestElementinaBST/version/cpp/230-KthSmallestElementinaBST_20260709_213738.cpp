// Last updated: 09/07/2026, 21:37:38
1#include <vector>
2
3/**
4 * Definition for singly-linked list.
5 * struct ListNode {
6 *     int val;
7 *     ListNode *next;
8 *     ListNode() : val(0), next(nullptr) {}
9 *     ListNode(int x) : val(x), next(nullptr) {}
10 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
11 * };
12 */
13class Solution {
14public:
15    bool isPalindrome(ListNode* head) {
16        std::vector<int> values;
17        
18        // Step 1: Copy all linked list values into a vector
19        ListNode* current = head;
20        while (current != nullptr) {
21            values.push_back(current->val);
22            current = current->next;
23        }
24        
25        // Step 2: Use two pointers to check if the vector is a palindrome
26        int left = 0;
27        int right = values.size() - 1;
28        
29        while (left < right) {
30            if (values[left] != values[right]) {
31                return false; // Found a mismatch
32            }
33            left++;
34            right--;
35        }
36        
37        return true; // All values matched perfectly
38    }
39};