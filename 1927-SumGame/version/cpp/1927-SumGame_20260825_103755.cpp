// Last updated: 25/08/2026, 10:37:55
1class Solution {
2public:
3    bool sumGame(string num) {
4        int n = num.length();
5        int left_sum = 0, right_sum = 0;
6        int left_q = 0, right_q = 0;
7
8        for (int i = 0; i < n / 2; i++) {
9            if (num[i] == '?') left_q++;
10            else left_sum += num[i] - '0';
11        }
12
13        for (int i = n / 2; i < n; i++) {
14            if (num[i] == '?') right_q++;
15            else right_sum += num[i] - '0';
16        }
17
18        if ((left_q + right_q) % 2 != 0) return true;
19
20        return (left_sum - right_sum) != (right_q - left_q) * 9 / 2;
21    }
22};