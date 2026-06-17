// Last updated: 17/06/2026, 09:44:15
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int cnt = 0, ans = 0;
5
6        for (char c : s) {
7            if (c == 'R')
8                cnt++;
9            else
10                cnt--;
11
12            if (cnt == 0)
13                ans++;
14        }
15
16        return ans;
17    }
18};