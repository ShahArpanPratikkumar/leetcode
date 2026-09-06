// Last updated: 06/09/2026, 22:51:18
1class Solution {
2public:
3    int numDistinct(string s, string t) {
4        int n = s.length();
5        int m = t.length();
6        
7        // If s is shorter than t, t cannot be a subsequence of s
8        if (n < m) return 0;
9        
10        // dp[j] stores the number of subsequences matching t[0...j-1]
11        // Using unsigned long long to prevent integer overflow during intermediate states
12        vector<unsigned long long> dp(m + 1, 0);
13        
14        // Base case: empty t can be formed in 1 way
15        dp[0] = 1;
16        
17        for (int i = 1; i <= n; ++i) {
18            for (int j = m; j >= 1; --j) {
19                if (s[i - 1] == t[j - 1]) {
20                    dp[j] += dp[j - 1];
21                }
22            }
23        }
24        
25        return dp[m];
26    }
27};