// Last updated: 09/07/2026, 21:20:41
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        return n > 0 && (n & (n - 1)) == 0;
5    }
6};