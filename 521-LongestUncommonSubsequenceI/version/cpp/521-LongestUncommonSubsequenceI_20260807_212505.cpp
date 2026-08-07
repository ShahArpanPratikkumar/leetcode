// Last updated: 07/08/2026, 21:25:05
1class Solution {
2public:
3    int findLUSlength(string a, string b) {
4        if (a == b) return -1;
5        return max(a.length(), b.length());
6    }
7};