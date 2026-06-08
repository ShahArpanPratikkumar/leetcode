// Last updated: 09/06/2026, 00:35:38
1class Solution {
2public:
3    int reverse(int x) {
4        int ans = 0;
5
6        while (x != 0) {
7            int d = x % 10;
8
9            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
10                return 0;
11
12            ans = ans * 10 + d;
13            x /= 10;
14        }
15
16        return ans;
17    }
18};