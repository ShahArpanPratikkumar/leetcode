// Last updated: 28/09/2026, 09:22:56
1class Solution {
2public:
3    int maxDepth(string s) {
4        int currentDepth = 0;
5        int maxDepth = 0;
6
7        for (char c : s) {
8            if (c == '(') {
9                currentDepth++;
10                maxDepth = max(maxDepth, currentDepth);
11            } else if (c == ')') {
12                currentDepth--;
13            }
14        }
15
16        return maxDepth;
17    }
18};