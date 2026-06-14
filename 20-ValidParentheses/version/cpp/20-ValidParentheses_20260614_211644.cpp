// Last updated: 14/06/2026, 21:16:44
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char c : s) {
7            if (c == '(' || c == '[' || c == '{') {
8                st.push(c);
9            } else {
10                if (st.empty()) return false;
11
12                if ((c == ')' && st.top() != '(') ||
13                    (c == ']' && st.top() != '[') ||
14                    (c == '}' && st.top() != '{'))
15                    return false;
16
17                st.pop();
18            }
19        }
20
21        return st.empty();
22    }
23};