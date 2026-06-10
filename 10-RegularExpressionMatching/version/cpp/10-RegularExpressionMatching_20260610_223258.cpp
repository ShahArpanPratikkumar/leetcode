// Last updated: 10/06/2026, 22:32:58
1class Solution {
2public:
3    bool isMatch(string s, string p) {
4        int n = s.size(), m = p.size();
5
6        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
7        dp[0][0] = true;
8
9        // Handle patterns like a*, a*b*, a*b*c*
10        for (int j = 2; j <= m; j++) {
11            if (p[j - 1] == '*')
12                dp[0][j] = dp[0][j - 2];
13        }
14
15        for (int i = 1; i <= n; i++) {
16            for (int j = 1; j <= m; j++) {
17
18                if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
19                    dp[i][j] = dp[i - 1][j - 1];
20                }
21
22                else if (p[j - 1] == '*') {
23                    // Zero occurrence of previous character
24                    dp[i][j] = dp[i][j - 2];
25
26                    // One or more occurrences
27                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
28                        dp[i][j] = dp[i][j] || dp[i - 1][j];
29                    }
30                }
31            }
32        }
33
34        return dp[n][m];
35    }
36};