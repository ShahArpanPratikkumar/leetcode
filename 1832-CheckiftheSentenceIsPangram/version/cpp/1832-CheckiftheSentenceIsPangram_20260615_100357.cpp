// Last updated: 15/06/2026, 10:03:57
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        unordered_set<char> st;
5
6        for (char ch : sentence) {
7            st.insert(ch);
8        }
9
10        return st.size() == 26;
11    }
12};