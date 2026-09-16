// Last updated: 16/09/2026, 14:13:52
1class Solution {
2public:
3    int numberOfSets(int n, int k) {
4        long long MOD = 1e9 + 7;
5        long long N = n + k - 1;
6        long long K = 2 * k;
7
8        if (K > N) return 0;
9
10        auto power = [&](long long base, long long exp) {
11            long long res = 1;
12            base %= MOD;
13            while (exp > 0) {
14                if (exp % 2 == 1) res = (res * base) % MOD;
15                base = (base * base) % MOD;
16                exp /= 2;
17            }
18            return res;
19        };
20
21        long long num = 1, den = 1;
22        for (int i = 0; i < K; ++i) {
23            num = (num * (N - i)) % MOD;
24            den = (den * (i + 1)) % MOD;
25        }
26
27        return (num * power(den, MOD - 2)) % MOD;
28    }
29};