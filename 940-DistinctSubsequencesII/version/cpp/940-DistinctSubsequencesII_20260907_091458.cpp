// Last updated: 07/09/2026, 09:14:58
1class Solution {
2public:
3    int distinctSubseqII(string s) {
4        long MOD = 1e9 + 7;
5        long total = 0;
6        vector<long> dp(26, 0); // Stores count of distinct subsequences ending at each char
7        
8        for (char c : s) {
9            int idx = c - 'a';
10            long new_seq = (total + 1 - dp[idx] + MOD) % MOD;
11            
12            total = (total + new_seq) % MOD;
13            dp[idx] = (dp[idx] + new_seq) % MOD;
14        }
15        
16        return total;
17    }
18};