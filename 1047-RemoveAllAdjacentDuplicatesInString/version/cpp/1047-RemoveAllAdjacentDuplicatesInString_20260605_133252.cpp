// Last updated: 05/06/2026, 13:32:52
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string st;
5
6        for (char ch : s) {
7            if (!st.empty() && st.back() == ch) {
8                st.pop_back();
9            } else {
10                st.push_back(ch);
11            }
12        }
13
14        return st;
15    }
16};