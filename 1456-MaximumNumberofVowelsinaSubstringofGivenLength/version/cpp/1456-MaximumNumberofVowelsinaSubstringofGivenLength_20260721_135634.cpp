// Last updated: 21/07/2026, 13:56:34
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int current = 0, max_cnt = 0;
5
6        for (int i = 0; i < s.length(); i++) {
7            
8            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
9                current++;
10            }
11
12            if (i >= k) {
13                char out = s[i - k];
14                if (out == 'a' || out == 'e' || out == 'i' || out == 'o' || out == 'u') {
15                    current--;
16                }
17            }
18
19            max_cnt = max(max_cnt, current);
20        }
21
22        return max_cnt;
23    }
24};