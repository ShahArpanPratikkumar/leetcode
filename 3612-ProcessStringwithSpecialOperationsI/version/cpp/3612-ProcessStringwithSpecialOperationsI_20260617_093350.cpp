// Last updated: 17/06/2026, 09:33:50
1class Solution {
2public:
3    string processStr(string s) {
4        string ans = "";
5
6        for (char c : s) {
7            if (c >= 'a' && c <= 'z')
8                ans += c;
9            else if (c == '*') {
10                if (!ans.empty()) ans.pop_back();
11            }
12            else if (c == '#')
13                ans += ans;
14            else if (c == '%')
15                reverse(ans.begin(), ans.end());
16        }
17
18        return ans;
19    }
20};