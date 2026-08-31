// Last updated: 31/08/2026, 15:45:34
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
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
14        if (!head || !head->next || !head->next->next) {
15            return {-1, -1};
16        }
17
18        int firstCritical = -1;
19        int prevCritical = -1;
20        int minDistance = INT_MAX;
21
22        ListNode* prev = head;
23        ListNode* curr = head->next;
24        int index = 1;
25
26        while (curr->next != nullptr) {
27            ListNode* nextNode = curr->next;
28
29            // Check if current node is a local maxima or minima
30            if ((curr->val > prev->val && curr->val > nextNode->val) ||
31                (curr->val < prev->val && curr->val < nextNode->val)) {
32                
33                if (firstCritical == -1) {
34                    firstCritical = index;
35                } else {
36                    minDistance = min(minDistance, index - prevCritical);
37                }
38                prevCritical = index;
39            }
40
41            prev = curr;
42            curr = nextNode;
43            index++;
44        }
45
46        // Return [-1, -1] if fewer than 2 critical points are found
47        if (firstCritical == -1 || firstCritical == prevCritical) {
48            return {-1, -1};
49        }
50
51        int maxDistance = prevCritical - firstCritical;
52        return {minDistance, maxDistance};
53    }
54};