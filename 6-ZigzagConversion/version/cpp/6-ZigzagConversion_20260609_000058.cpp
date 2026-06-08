// Last updated: 09/06/2026, 00:00:58
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1) return s;
5
6        vector<string> v(numRows);
7        int row = 0;
8        bool down = true;
9
10        for (char ch : s) {
11            v[row] += ch;
12
13            if (row == 0)
14                down = true;
15            else if (row == numRows - 1)
16                down = false;
17
18            if (down)
19                row++;
20            else
21                row--;
22        }
23
24        string ans = "";
25        for (string str : v)
26            ans += str;
27
28        return ans;
29    }
30};