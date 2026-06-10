// Last updated: 10/06/2026, 22:40:54
1class Solution {
2public:
3    int value(char c) {
4        if (c == 'I') return 1;
5        if (c == 'V') return 5;
6        if (c == 'X') return 10;
7        if (c == 'L') return 50;
8        if (c == 'C') return 100;
9        if (c == 'D') return 500;
10        return 1000; // M
11    }
12
13    int romanToInt(string s) {
14        int ans = 0;
15
16        for (int i = 0; i < s.size(); i++) {
17            if (i + 1 < s.size() && value(s[i]) < value(s[i + 1]))
18                ans -= value(s[i]);
19            else
20                ans += value(s[i]);
21        }
22
23        return ans;
24    }
25};