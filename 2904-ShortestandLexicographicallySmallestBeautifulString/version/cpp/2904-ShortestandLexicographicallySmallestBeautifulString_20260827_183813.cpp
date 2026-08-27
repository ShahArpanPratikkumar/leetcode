// Last updated: 27/08/2026, 18:38:13
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) {
4        int n = s.length();
5        string ans = "";
6        
7        for (int i = 0; i < n; ++i) {
8            int countOnes = 0;
9            for (int j = i; j < n; ++j) {
10                if (s[j] == '1') {
11                    countOnes++;
12                }
13                
14                if (countOnes == k) {
15                    string sub = s.substr(i, j - i + 1);
16                    if (ans.empty() || sub.length() < ans.length() || 
17                       (sub.length() == ans.length() && sub < ans)) {
18                        ans = sub;
19                    }
20                    break; // Moving j further will only increase length with countOnes >= k
21                }
22            }
23        }
24        
25        return ans;
26    }
27};