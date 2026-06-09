// Last updated: 09/06/2026, 09:17:05
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0, sign = 1;
5        long long num = 0;
6
7        while (i < s.size() && s[i] == ' ')
8            i++;
9
10        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
11            if (s[i] == '-') sign = -1;
12            i++;
13        }
14
15        while (i < s.size() && isdigit(s[i])) {
16            num = num * 10 + (s[i] - '0');
17
18            if (sign * num > INT_MAX) return INT_MAX;
19            if (sign * num < INT_MIN) return INT_MIN;
20
21            i++;
22        }
23
24        return sign * num;
25    }
26};