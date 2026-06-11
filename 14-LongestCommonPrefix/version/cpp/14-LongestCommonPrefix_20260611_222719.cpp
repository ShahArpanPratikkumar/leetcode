// Last updated: 11/06/2026, 22:27:19
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans = "";
5
6        for (int i = 0; i < strs[0].size(); i++) {
7            char ch = strs[0][i];
8
9            for (int j = 1; j < strs.size(); j++) {
10                if (i >= strs[j].size() || strs[j][i] != ch)
11                    return ans;
12            }
13
14            ans += ch;
15        }
16
17        return ans;
18    }
19};