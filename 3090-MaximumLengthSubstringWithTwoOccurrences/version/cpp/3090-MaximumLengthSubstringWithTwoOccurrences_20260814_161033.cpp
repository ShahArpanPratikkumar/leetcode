// Last updated: 14/08/2026, 16:10:33
1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        int n = s.length();
5        int maxLength = 0;
6        
7        for (int i = 0; i < n; ++i) {
8            vector<int> count(26, 0);
9            for (int j = i; j < n; ++j) {
10                count[s[j] - 'a']++;
11                
12                if (count[s[j] - 'a'] > 2) {
13                    break; // Invalid substring, stop expanding right pointer
14                }
15                
16                maxLength = max(maxLength, j - i + 1);
17            }
18        }
19        
20        return maxLength;
21    }
22};