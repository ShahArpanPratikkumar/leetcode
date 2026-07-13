// Last updated: 13/07/2026, 22:06:51
1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int> ans(n + 1, 0);
5        for (int i = 1; i <= n; ++i) {
6            ans[i] = ans[i & (i - 1)] + 1;
7        }
8        return ans;
9    }
10};