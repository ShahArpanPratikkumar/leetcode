// Last updated: 02/08/2026, 20:33:06
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> next_greater;
5        stack<int> st;
6
7        // Traverse nums2 to find the next greater element for each number
8        for (int num : nums2) {
9            while (!st.empty() && st.top() < num) {
10                next_greater[st.top()] = num;
11                st.pop();
12            }
13            st.push(num);
14        }
15
16        // Build the result for nums1 using the precomputed map
17        vector<int> ans;
18        ans.reserve(nums1.size());
19        for (int num : nums1) {
20            if (next_greater.count(num)) {
21                ans.push_back(next_greater[num]);
22            } else {
23                ans.push_back(-1); // No greater element found
24            }
25        }
26
27        return ans;
28    }
29};