// Last updated: 08/08/2026, 20:23:25
1class Solution {
2public:
3    string reverseStr(string s, int k) {
4        int n = s.length();
5        for (int start = 0; start < n; start += 2 * k) {
6            int end = min(start + k, n);
7            reverse(s.begin() + start, s.begin() + end);
8        }
9        return s;
10    }
11};