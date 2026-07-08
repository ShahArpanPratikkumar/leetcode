// Last updated: 08/07/2026, 10:42:48
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count = 0;
5        while (n != 0) {
6            // This operation clears the lowest set bit
7            n &= (n - 1);
8            count++;
9        }
10        return count;
11    }
12};