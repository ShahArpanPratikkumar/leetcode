// Last updated: 08/07/2026, 10:06:12
1class Solution {
2public:
3    uint32_t reverseBits(uint32_t n) {
4        uint32_t result = 0;
5        for (int i = 0; i < 32; i++) {
6            // Shift the result to the left to make room for the next bit
7            result <<= 1;
8            // Add the least significant bit of n to the result
9            result |= (n & 1);
10            // Shift n to the right to process the next bit
11            n >>= 1;
12        }
13        return result;
14    }
15};