// Last updated: 07/07/2026, 22:06:04
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string ans = "";
5
6        while (columnNumber > 0) {
7            columnNumber--;   // Make it 0-based
8            ans = char('A' + (columnNumber % 26)) + ans;
9            columnNumber /= 26;
10        }
11
12        return ans;
13    }
14};