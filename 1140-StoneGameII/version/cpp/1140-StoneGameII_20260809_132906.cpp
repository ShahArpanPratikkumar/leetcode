// Last updated: 09/08/2026, 13:29:06
1class Solution {
2public:
3    int stoneGameII(vector<int>& piles) {
4        int n = piles.size();
5        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
6        vector<int> suffixSum(n + 1, 0);
7        for (int i = n - 1; i >= 0; --i) {
8            suffixSum[i] = suffixSum[i + 1] + piles[i];
9        }
10        for (int i = n - 1; i >= 0; --i) {
11            for (int m = 1; m <= n; ++m) {
12                if (i + 2 * m >= n) {
13                    dp[i][m] = suffixSum[i];
14                } else {
15                    for (int x = 1; x <= 2 * m; ++x) {
16                        dp[i][m] = max(dp[i][m], suffixSum[i] - dp[i + x][max(m, x)]);
17                    }
18                }
19            }
20        }
21
22        return dp[0][1];
23    }
24};