// Last updated: 13/07/2026, 22:49:38
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long odd = 1;
5        while (num > 0) {
6            num -= odd;
7            odd += 2;
8        }
9        return num == 0;
10    }
11};