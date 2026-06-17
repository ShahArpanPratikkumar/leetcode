// Last updated: 17/06/2026, 10:37:16
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr = "";
6
7        for (int i = 0; i <= path.size(); i++) {
8            if (i == path.size() || path[i] == '/') {
9
10                if (curr == "" || curr == ".") {
11                    
12                }
13                else if (curr == "..") {
14                    if (!st.empty()) st.pop_back();
15                }
16                else {
17                    st.push_back(curr);
18                }
19
20                curr = "";
21            }
22            else {
23                curr += path[i];
24            }
25        }
26
27        string ans = "";
28        for (string s : st)
29            ans += "/" + s;
30
31        return ans.empty() ? "/" : ans;
32    }
33};