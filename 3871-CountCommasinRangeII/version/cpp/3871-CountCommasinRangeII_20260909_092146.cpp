// Last updated: 09/09/2026, 09:21:46
1class Solution {
2public:
3    long long countCommas(long long n) {
4        long long totalCommas = 0;
5        long long threshold = 1000;
6
7        while (n >= threshold) {
8            totalCommas += (n - threshold + 1);
9            // Avoid overflow when multiplying by 1000
10            if (threshold > LLONG_MAX / 1000) break;
11            threshold *= 1000;
12        }
13
14        return totalCommas;
15    }
16};