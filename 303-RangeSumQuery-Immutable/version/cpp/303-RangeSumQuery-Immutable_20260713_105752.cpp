// Last updated: 13/07/2026, 10:57:52
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if (n <= 0) return false;
5        while (n % 3 == 0) {
6            n /= 3;
7        }
8        return n == 1;
9    }
10};