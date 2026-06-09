// Last updated: 09/06/2026, 15:11:31
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans ;
5        int depth = 0;
6
7        for (char c : s){
8            if ( c == '(') {
9                if (depth > 0 ) ans += c;
10                depth++;
11            }
12            else {
13                depth--;
14                if (depth > 0 ) ans += c;
15            }
16        }
17        return ans;
18    }
19};