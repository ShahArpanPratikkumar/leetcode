// Last updated: 13/08/2026, 13:57:57
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int> values;
15        while (head != nullptr) {
16            values.push_back(head->val);
17            head = head->next;
18        }
19
20        int n = values.size();
21        vector<int> answer(n, 0);
22        stack<int> st; 
23        for (int i = 0; i < n; ++i) {
24            while (!st.empty() && values[st.top()] < values[i]) {
25                answer[st.top()] = values[i];
26                st.pop();
27            }
28            st.push(i);
29        }
30
31        return answer;
32    }
33};