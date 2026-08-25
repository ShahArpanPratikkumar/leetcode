// Last updated: 25/08/2026, 14:47:08
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        stack<int> s1, s2;
15        
16        while (l1) {
17            s1.push(l1->val);
18            l1 = l1->next;
19        }
20        while (l2) {
21            s2.push(l2->val);
22            l2 = l2->next;
23        }
24        
25        int sum = 0;
26        ListNode* head = nullptr;
27        
28        while (!s1.empty() || !s2.empty() || sum > 0) {
29            if (!s1.empty()) {
30                sum += s1.top();
31                s1.pop();
32            }
33            if (!s2.empty()) {
34                sum += s2.top();
35                s2.pop();
36            }
37            
38            ListNode* node = new ListNode(sum % 10);
39            node->next = head;
40            head = node;
41            
42            sum /= 10;
43        }
44        
45        return head;
46    }
47};