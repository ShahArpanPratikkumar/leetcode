// Last updated: 30/07/2026, 10:07:28
class Solution {
public:
    bool isPowerOfFour(int n) {
        // Must be a power of two, and (n - 1) must be divisible by 3
        return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
    }
};