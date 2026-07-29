// Last updated: 29/07/2026, 23:34:02
1class Solution {
2public:
3    string licenseKeyFormatting(string s, int k) {
4        string result = "";
5        int count = 0;
6        
7        for (int i = s.length() - 1; i >= 0; --i) {
8            if (s[i] != '-') {
9                if (count > 0 && count % k == 0) {
10                    result += '-';
11                }
12                result += toupper(s[i]);
13                count++;
14            }
15        }
16        
17        reverse(result.begin(), result.end());
18        
19        return result;
20    }
21};