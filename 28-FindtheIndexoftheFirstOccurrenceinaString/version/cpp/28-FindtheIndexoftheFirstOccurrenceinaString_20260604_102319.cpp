// Last updated: 04/06/2026, 10:23:19
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.size();
5        int m = needle.size();
6
7        for (int i = 0; i <= n - m; i++) {
8            int j = 0;
9            while (j < m && haystack[i + j] == needle[j]) {
10                j++;
11            }
12            if (j == m) {
13                return i;
14            }
15        }
16
17        return -1;
18    }
19};