// Last updated: 13/07/2026, 22:05:50
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        // Must be a power of two, and (n - 1) must be divisible by 3
5        return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
6    }
7};