// Last updated: 07/07/2026, 22:07:03
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int ans = 0;
5
6        for (char ch : columnTitle) {
7            ans = ans * 26 + (ch - 'A' + 1);
8        }
9
10        return ans;
11    }
12};