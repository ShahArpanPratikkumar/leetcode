// Last updated: 06/08/2026, 14:32:17
1class Solution {
2public:
3    string countAndSay(int n) {
4        string res = "1";
5        
6        for (int i = 1; i < n; ++i) {
7            string next_res = "";
8            int count = 1;
9            
10            for (size_t j = 0; j < res.length(); ++j) {
11                // Check if we reached the end or if the next character is different
12                if (j + 1 == res.length() || res[j] != res[j + 1]) {
13                    next_res += to_string(count) + res[j];
14                    count = 1;
15                } else {
16                    count++;
17                }
18            }
19            
20            res = next_res;
21        }
22        
23        return res;
24    }
25};