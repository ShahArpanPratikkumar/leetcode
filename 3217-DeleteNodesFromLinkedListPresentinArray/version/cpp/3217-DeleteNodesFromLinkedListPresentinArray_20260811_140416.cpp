// Last updated: 11/08/2026, 14:04:16
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int> st(nums.begin(), nums.end());
15        
16        ListNode dummy(0);
17        dummy.next = head;
18        ListNode* curr = &dummy;
19        
20        while (curr->next != nullptr) {
21            if (st.count(curr->next->val)) {
22                curr->next = curr->next->next;
23            } else {
24                curr = curr->next;
25            }
26        }
27        
28        return dummy.next;
29    }
30};