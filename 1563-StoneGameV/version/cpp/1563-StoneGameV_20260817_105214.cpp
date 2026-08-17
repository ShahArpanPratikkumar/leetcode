// Last updated: 17/08/2026, 10:52:14
1class Solution {
2    int memo[501][501];
3    int pref[501];
4
5    int getSum(int l, int r) {
6        return pref[r + 1] - pref[l];
7    }
8
9    int solve(int l, int r, vector<int>& stoneValue) {
10        if (l == r) return 0;
11        if (memo[l][r] != -1) return memo[l][r];
12
13        int maxScore = 0;
14        for (int i = l; i < r; ++i) {
15            int leftSum = getSum(l, i);
16            int rightSum = getSum(i + 1, r);
17
18            if (leftSum < rightSum) {
19                maxScore = max(maxScore, leftSum + solve(l, i, stoneValue));
20            } else if (rightSum < leftSum) {
21                maxScore = max(maxScore, rightSum + solve(i + 1, r, stoneValue));
22            } else {
23                maxScore = max(maxScore, leftSum + max(solve(l, i, stoneValue), solve(i + 1, r, stoneValue)));
24            }
25        }
26
27        return memo[l][r] = maxScore;
28    }
29
30public:
31    int stoneGameV(vector<int>& stoneValue) {
32        int n = stoneValue.size();
33        memset(memo, -1, sizeof(memo));
34        
35        pref[0] = 0;
36        for (int i = 0; i < n; ++i) {
37            pref[i + 1] = pref[i] + stoneValue[i];
38        }
39
40        return solve(0, n - 1, stoneValue);
41    }
42};