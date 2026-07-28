// Last updated: 28/07/2026, 21:08:23
1class Solution {
2public:
3    int findComplement(int num) {
4        int temp = num;
5        unsigned int mask = 0;
6    
7        while (temp > 0) {
8            mask = (mask << 1) | 1;
9            temp >>= 1;
10        }
11        return num ^ mask;
12    }
13};