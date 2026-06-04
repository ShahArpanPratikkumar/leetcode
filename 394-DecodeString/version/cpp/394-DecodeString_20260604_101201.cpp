// Last updated: 04/06/2026, 10:12:01
1class Solution {
2public:
3    string decodeString(string s) {
4        int i = 0;
5        return decode(s, i);
6    }
7
8    string decode(string &s, int &i) {
9        string result = "";
10        int k = 0;
11
12        while (i < s.size()) {
13            if (isdigit(s[i])) {
14                k = k * 10 + (s[i] - '0');
15                i++;
16            }
17            else if (s[i] == '[') {
18                i++;  // skip '['
19                string decodedPart = decode(s, i);
20                
21                while (k--) {
22                    result += decodedPart;
23                }
24                k = 0;
25            }
26            else if (s[i] == ']') {
27                i++;  // skip ']'
28                return result;
29            }
30            else {
31                result += s[i];
32                i++;
33            }
34        }
35        return result;
36    }
37};